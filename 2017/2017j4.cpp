// ccc 2017 problem j4
// By: Emilio, Completed on 2-1-2024, 10:14PM

// NOTES:
// Using a vector was probably not the best choice for this problem
// I plan on re writing this but with a list next as it has a push_front
// function I don't like this code because its unreadable and horrible but it
// works so thats all that matters

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int d;
  cin >> d;
  int out = 0;
  vector<int> time{1, 2, 0, 0};
  int addon = 0;
  int difference;

  for (int timePassed = 0; timePassed < d; timePassed++) {
    time[time.size() - 1]++;
    if (time[time.size() - 1] == 10) {
      time[time.size() - 2]++;
      time[time.size() - 1] = 0;
    }
    if (time[time.size() - 2] == 6) {
      time[time.size() - 3]++;
      time[time.size() - 2] = 0;
    }
    if (time.size() == 4) {
      if (time[0] == 1 && time[1] == 3) {
        time.erase(time.begin());
        time[0] = 1;
      }
    } else {
      if (time[0] == 10) {
        time = {1, 0, 0, 0};
      }
    }
    difference = time[1] - time[0];
    for (int i = 1; i < time.size() - 1; i++) {
      if (time[i + 1] - time[i] == difference) {
        addon = 1;
      } else {
        addon = 0;
        break;
      }
    }
    out += addon;
  }
  cout << out;
}
