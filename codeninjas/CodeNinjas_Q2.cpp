#include <iostream>
using namespace std;

int main() {
  double w;
  cout << "Enter weight: ";
  cin >> w;

  double h;
  cout << "Enter height: ";
  cin >> h;

  double bmi = w / (h * h);
  if (bmi > 25) {
    cout << "Overweight";
  } else if (bmi > 18.5 && bmi < 25) {
    cout << "Normal weight";
  } else if (bmi > 18.5) {
    cout << "Underweight";
  }
}
