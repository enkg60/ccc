#include <iostream>
using namespace std;

int main() {
  int wins = 0;
  for(int i = 0; i < 6; i++){
    string in;
    cin >> in;
    if(in == "W"){
      wins++;
    }
  }

  if(wins == 1 || wins == 2){
    cout << 3;
  }
  
  if(wins == 3 || wins == 4){
    cout << 2;
  }
  
  if(wins == 5 || wins == 6){
    cout << 1;
  }
}
