#include <iostream>
#include <vector>
#include <string>
using namespace std;

void vecout(vector<vector<int>> vec){
  for(int x = 0; x < vec.size(); x++){
    for(int y = 0; y < vec[x].size(); y++){
      cout << vec[x][y] << " ";
    }
    cout << '\n';
  }
}

int main(){

  vector<vector<int>> tracking {};
  vector<vector<int>> out{};
  int time = 0;

  /*
  string inputs[] = {
    "R 12",
    "W 2",
    "R 23",
    "W 3",
    "R 45",
    "S 45",
    "R 45",
    "S 23",
    "R 23",
    "W 2",
    "S 23",
    "R 34",
    "S 12",
    "S 34"
  };
  */

  string inputs[]{
    "R 2",
    "R 3",
    "W 5",
    "S 2",
    "S 3"
  };
  int in = 5;

  for(int i = 0; i < in; i++){
    cout << "\n\n TIME: " << time << "\n\n";
    string line = inputs[i];


    char mode = line[0];
    int other;
    if(line.size() > 3){
      string temp;
      for(int k = 2; k < line.size(); k++){
        temp[k-2] = line[k];
      }
      other = stoi(temp);
    } else {
      other = int(line[2]) - 48;
    }

    if(mode == 'R'){

      bool exisi = false;
      vector<int> p = {other, time};
      tracking.push_back(p);

      for(int x = 0; x < out.size(); x++){
        if(out[x][0] == other){
          exisi = true;
          break;
        }
      }

      if(!exisi){
        out.push_back({other, 0});
      }


      cout << "ADDED NEW ROW: \n";
      vecout(tracking);
      cout << "END OF NEW ROW ADDITION \n";
      cout << "ADDED NEW ROW BUT OUT: \n";
      vecout(out);
      cout << "END OF NEW ROW ADDITION \n";
    }

    if(mode == 'W'){
      time += other - 1;
      continue;
    }

    if(mode == 'S'){
      //find it in tracking
      int received;
      int sent = time;
      for(int x = 0; x < tracking.size(); x++){
        if(tracking[x][0] == other){
          received = tracking[x][1];
          tracking.erase(tracking.begin() + x);
          break;
        }
      }
      for(int x = 0; x < out.size(); x++){
        if(out[x][0] == other){
          out[x][1] += sent - received;
          break;
        }
      }
    }

    time++;
  }

  if(tracking.size() > 0){
    for(int x = 0; x < tracking.size(); x++){
      int id = tracking[x][0];
      for(int y = 0; y < out.size(); y++){
        if(id == out[y][0]){
          out[y][1] = -1;
        }
      }
    }
  }
  //print out
  cout << "\nTRACKING:\n";
  vecout(tracking);
  cout << "\n OUTPUT: \n";
  vecout(out);
}
