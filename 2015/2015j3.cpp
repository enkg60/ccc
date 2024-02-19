#include <iostream>
using namespace std;

// started last week friday i think not sure
// finished on 2024-02-15 7:43 PM
// notes:
// not the best, lots of spaghetti code i feel and could probably be rewritten in way less lines
// going to search up video to find more optimized code
// code is also very unreadable and had to use more comments than i would like

// should probably start writing code in the most optimized way possible instead of just
// making it as fast of possibble for the sake of making it as fast of possible

int main() {
  string input;
  cin >> input;

  string cons[input.length()];
  
  for(int i = 0; i < input.length(); i++){
    cons[i] = input[i];
  }
  
  string out;
  string alphabet[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                         "j", "k", "l", "m", "n", "o", "p", "q", "r",
                         "s", "t", "u", "v", "w", "x", "y", "z"};
  int vowelIndexs[5] = {0, 4, 8, 14, 20};

  for (int i = 0; i < sizeof(cons) / sizeof(string); i++) {
    int indexOfLetter = 0;
    string pigTranslation;
    string letter = cons[i];

    // if letter is a vowel add letter to out and continue next interation
    if (letter == "a" || letter == "e" || letter == "i" || letter == "o" ||
        letter == "u") {
      out.append(letter);
      continue;
    }

    // find alphabet index
    for (int x = 0; x < sizeof(alphabet) / sizeof(string); x++) {
      if (alphabet[x] == letter) {
        indexOfLetter = x;
        break;
      }
    }

    // first step
    pigTranslation.append(alphabet[indexOfLetter]);

    // second step find closest vowel

    int indexOfVowel;
    int lowestDifference = indexOfLetter;
    int closestVowel = vowelIndexs[0];
    for (int x = 1; x < sizeof(vowelIndexs) / sizeof(int); x++) {
      int difference = 0;
      indexOfVowel = vowelIndexs[x];

      if (indexOfVowel < indexOfLetter) {
        while (alphabet[indexOfLetter - difference] != alphabet[indexOfVowel]) {
          difference++;
        }
      } else if (indexOfLetter < indexOfVowel) {
        while (alphabet[indexOfLetter + difference] != alphabet[indexOfVowel]) {
          difference++;
        }
      }
      if (difference < lowestDifference) {
        lowestDifference = difference;
        closestVowel = vowelIndexs[x];
      }
    }
    pigTranslation.append(alphabet[closestVowel]);


    // third step

    int p = 1;
    string nextLetter = alphabet[indexOfLetter + p];
    if (letter != "z") {
      while(nextLetter == "a" || nextLetter == "e" || nextLetter == "i" || nextLetter == "o" || nextLetter == "u"){
        nextLetter = alphabet[indexOfLetter + p];
        p++;
      }
      pigTranslation.append(nextLetter);
    } else {
      pigTranslation.append("z");
    }

    out.append(pigTranslation);
  }
  cout << out;
}

