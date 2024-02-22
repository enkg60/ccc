//NOT FULLY WORKING, PROBLEM WITH COST B FORMULA
#include <iostream>
using namespace std;

int main() {
  int times[3];
  cout << "Number of daytime minutes?\n";
  cin >> times[0];
  cout << "Number of evening minutes?\n";
  cin >> times[1];
  cout << "Number of weekend minutes?\n";
  cin >> times[2];

  double costA = (times[0] - 100) * .25 + times[1] * .15 + times[2] * .20;

  double costB = ((times[0] - 250) * .45) + (times[1] * .35) + (times[2] * .25);

  cout << "Plan A costs " << costA << "\n";
  cout << "Plan B costs " << costB << "\n";

  if (costA == costB) {
    cout << "Plan A and B are the same price.";
  } else if (costA > costB) {
    cout << "Plan B is cheapest";
  } else {
    cout << "Plan A is cheapest";
  }
}
