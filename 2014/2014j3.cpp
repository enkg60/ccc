//started 10:23
//finished 11:01 am


#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int p1 = 100;
  int p2 = 100;
  for(int i = 0; i < n; i++){
    string in;
    cin >> in;
    int p1in = int(in[0] - '0');
    int p2in = int(in[2] - '0');
    if(p2in == p1in){
      continue;
    }
    if(p2in > p1in){
      p1 -= p2in;
    } else {
      p2 -= p1in;
    }
    
  }
}
