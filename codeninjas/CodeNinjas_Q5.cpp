#include <iostream>
using namespace std;
int main() {
  int k;
  cin >> k;
  string word;
  cin >> word;
  for (int i = 0; i < word.length(); i++) {
    int newUnicode = int(word[i] - ((3 * (i + 1)) + k));
    if (newUnicode < 65) {
      newUnicode += 26;
    }
    cout << char(newUnicode);
  }
}
