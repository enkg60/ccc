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
    string line;
    cin >> line;
    char mode = line[0];
    int other = int(line[2]);

    if(mode == 'R'){
      bool exsists = false;
      int x;

      //check if already exsists else;
      
      for(x = 0; x < tracking.size(); x++){
        if(tracking[x][0] == other){
          exsists = true;
          break;
        }
      }
      if(exsists){
        break;
      } else {
        tracking.push_back(vector<int> p = {other, passed});
        onHold.push(tracking.size() - 1);
      }
    }

    if(mode == 'W'){
      while(!onHold.empty()){
        tracking[onHold.top()][1] += 1 + passed;
        onHold.pop();
      }
      passed = 0;
    }


    passed++;
  }
}
