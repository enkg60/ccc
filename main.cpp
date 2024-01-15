#include <iostream>
using namespace std;

int lowest(int pos[], int size) {
  int lowest = pos[0];
  for (int i = 0; i < size; i++) {
    if (pos[i] < lowest) {
      lowest = pos[i];
    }
  }
  return lowest;
}

int highest(int pos[], int size) {
  int highest = pos[0];
  for (int i = 0; i < size; i++) {
    if (pos[i] > highest) {
      highest = pos[i];
    }
  }
  return highest;
}

int main() {
  int N;
  cin >> N;

  int xPos[N];
  int yPos[N];
  // make input of coordinates so they can only be one line like specified
  for (int i = 0; i < N; i++) {
    cin >> xPos[i];
    cin >> yPos[i];
  }

  int lowestX = lowest(xPos, N) - 1;
  int lowestY = lowest(yPos, N) - 1;

  int highestX = highest(xPos, N) + 1;
  int highestY = highest(yPos, N) + 1;

  int bottomLeft[2] = {lowestX, lowestY};
  int topRight[2] = {highestX, highestY};

  std::cout << bottomLeft[0] << "," << bottomLeft[1] << "\n";
  std::cout << topRight[0] << "," << topRight[1] << "\n";
}