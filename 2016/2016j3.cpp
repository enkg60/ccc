#include <cstring>
#include <iostream>
using namespace std;
// CCC 2016 j3 by: Emilio
// started  around 5:40PM 2024-02-02
// solved around 7:35 PM 2024-02-02
// notes: i mean its pretty good but there are definetly a bunch of
// optimizations i could do like checks if the tempword and bruhword
// are equal to the out variable and could cut down program time by
// alot but whatever i spend more time than i should on j3's,
// im taking a break.

string reverseString(string word) {
  string dup = word;
  int len = word.length();
  for (int i = 0; i < len / 2; i++) {
    swap(dup[i], dup[len - 1 - i]);
  }
  return dup;
}

int main() {
  string word;
  cin >> word;
  int len = word.length();
  int out = 0;

  for (int x = 0; x < len - 1; x++) {
    string tempWord = word;
    tempWord.erase(tempWord.begin(), tempWord.begin() + x);

    string bruhWord = tempWord;
    for (int y = 0; y < tempWord.length() - 1; y++) {
      bruhWord = tempWord;
      bruhWord.erase(bruhWord.end() - y, bruhWord.end());
      int l = bruhWord.length();
      if (bruhWord == reverseString(bruhWord) && l > out) {
        out = l;
      }
    }
  }

  cout << out;
}
