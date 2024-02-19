#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
  int in;
  cin >> in;
  vector<vector<int>> tracking {
    

  };
  stack<int> onHold;
  int passed = 0;
  for(int i = 0; i < in; i++){
    string input;
    cin >> input;
    if(input[0] == "R"){
      //new row
      tracking.push_back({input[2], 0})
      onHold.push(tracking.back());
    }
    if(input[0] == "W"){
      while(!onHold.empty()){
        tracking[onHold.top()][1]++
      }
    }
  }
  for (int i = 0; i < tracking.size(); i++)  
    { 
        for (int j = 0; j < tracking[i].size(); j++) 
        { 
            cout << tracking[i][j] << " "; 
        }     
    }
}
