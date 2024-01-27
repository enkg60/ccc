#include <iostream>

using namespace std;
int main() {
  int numbers[4];
  cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];

  for(int city = 0; city < 5; city++){
    for(int comparing = 0; comparing < 5; comparing++){
      if(city == comparing){
        cout << 0 << " ";
      } else {
        int sum = 0;
        int difference = comparing - city;
        if(difference < 0){
          for(int i = 1; i < -difference + 1; i++){
            sum += numbers[city - i];
          }
        }
        if(difference > 0){
          for(int i = 0; i < difference; i++){
            sum += numbers[city + i];
          }
        }
        cout << sum << " ";
      }
      
    }
    cout << "\n";
  }
}
