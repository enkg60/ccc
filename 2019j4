#include <iostream>
using namespace std;

void horizontalFlip(int x[], int y[]) {
  y[0] = x[2];
  y[1] = x[3];
  y[2] = x[0];
  y[3] = x[1];
}

void verticalFlip(int x[], int y[]) {
  y[0] = x[1];
  y[1] = x[0];
  y[2] = x[3];
  y[3] = x[2];
}

int main() {
  string input;
  cin >> input;

  int table[4] = {1, 2, 3, 4};
  int outputTable[4] = {1, 2, 3, 4};

  for (int i = 0; i < input.size(); i++) {
    if (input[i] == 'v') {
      verticalFlip(table, outputTable);
    }
    if (input[i] == 'h') {
      horizontalFlip(table, outputTable);
    }
    copy(outputTable, outputTable + 4, table);
  }

  for (int i = 0; i < 4; i++) {
    if (i == 2) {
      cout << "\n";
    }
    cout << table[i] << " ";
  }
}
