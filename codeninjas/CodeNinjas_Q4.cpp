#include <iostream>
using namespace std;

int main() {
  string in;
  cin >> in;
  for (int i = 0; i < in.length(); i++) {
    if (in[i] == in[in.length() - i - 1]) {
      if (i == in.length() - 1) {
        cout << "true";
        break;
      }
      continue;
    } else {
      cout << "false";
      break;
    }
  }
}
