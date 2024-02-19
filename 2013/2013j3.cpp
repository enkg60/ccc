#include <iostream>
using namespace std;

// started 2024-02-16 around 6:10 pm
// finished 2024-02-16 7:41 pm
// notes:
// I used a dynamically allocated array
// and I actualy have no idea how they work, i just used them cause i could
// delete arrays that way. Researching and understanding them is now on my todo
// list though. I was hearing that there was a way to do this with a string, it
// might actually be faster to write and more efficient so im going to ask about
// that.

// Now that I think about it, this might have been pretty bad way to write this.

int main() {
  string c;
  cin >> c;
  bool distinct = false;
  bool more = false;
  int length = c.length();
  int *time = new int[length];

  for (int x = 0; x < length; x++) {
    time[x] = int(c[x]) - '0';
    cout << time[x];
  }

  while (distinct == false) {

    for (int l = 0; l < length; l++) {
      if (time[l] == 9) {
        more = true;
        continue;
      } else {
        more = false;
        break;
      }
    }
    if (more) {

      length += 1;
      int *copying = new int[length];
      copying[0] = 1;
      delete[] time;
      copy(copying, copying + length, time);
      delete[] copying;
    }
    time[length - 1]++;

    if (time[length - 1] == 10) {
      time[length - 1] = 0;
      time[length - 2]++;
    }
    if (time[length - 2] == 10) {
      time[length - 2] = 0;
      time[length - 3]++;
    }
    if (time[length - 3] == 10) {
      time[length - 3] = 0;
      time[length - 4]++;
    }
    cout << "time BEFORE: " << time[0] << time[1] << time[2] << time[3] << "\n";
    distinct = true;
    for (int x = 0; x < length; x++) {
      if (distinct == false) {
        break;
      }
      for (int y = 0; y < length; y++) {
        if (x == y) {
          continue;
        }

        if (time[x] == time[y]) {
          distinct = false;
          break;
        }
      }
    }
  }
  for (int b = 0; b < length; b++) {
    cout << time[b];
  }
}

