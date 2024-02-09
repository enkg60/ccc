#include <iostream>
using namespace std;
//By: Emilio, 2024-02-08
//Finished 7:51
//Started around 7:15
//Notes:
//Could have less lines but needed to finish before i have to leave this hour
int main() {
  int square[4][4];
  int sum = 0;

  bool magic = true;
  
  for(int y = 0; y < 4; y++){
    for(int x = 0; x < 4; x++){
      int in;
      cout << y << "," << x << " ";
      cin >> in; 
      
      square[y][x] = in;
      if(y == 0){
        sum += in;
      }
    }
    cout << "new Y\n";
  }

  cout << "THE SUM: " << sum << "\n";
  
  for(int y = 0; y < 4; y++){
    int xSum = 0;
    for(int x = 0; x < 4; x++){
      xSum = xSum + square[y][x];
    }
    cout << "THE X SUM: "<<xSum << "\n";
    if(xSum != sum){
      magic = false;
      break;
    }
  }
  
  for(int x = 0; x < 4; x++){
    int ySum = 0;
    for(int y = 0; y < 4; y++){
      ySum = ySum + square[x][y];
    }
    cout << "THE Y SUM: "<<ySum << "\n";
    if(ySum != sum){
      magic = false;
    }
  }
  if(magic){
    cout << "magic";
  } else{
    cout << "not magic";
  }
  
}
