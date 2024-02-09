#include <iostream>
using namespace std;
//By: Emilio, 2024-02-08
//Finished around 7:15
//Started around 7:05
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
