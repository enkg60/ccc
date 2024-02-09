#include <iostream>
using namespace std;
int main() {
  int biggest = 0;
  
  int N;
  cin >> N;
  string first;
  cin >> first;
  string second;
  cin >> second;
  
  for(int x = 0; x < N + 1; x++){
    if(first[x] == 'C' && second[x] == 'C'){ 
      biggest += 1;
    }
  }
  cout << biggest;
}







