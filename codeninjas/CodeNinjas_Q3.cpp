#include <iostream>
using namespace std;

int main() {
  int r;
  cin >> r;
  int c;
  cin >> c;
  for (int y = 1; y < r + 1; y++) {
    for (int x = 1; x < c + 1; x++) {
      cout << y * x << " ";
    }
    cout << "\n";
  }
}
