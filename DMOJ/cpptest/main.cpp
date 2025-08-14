#include <cmath>
#include <iostream>

using namespace std;

long FindCube888(int num) {

  long cube = num;
  long cubed = 0;

  while (1 == 1) {

    cubed = pow(cube, 3);

    if (cubed % 1000 == 888) {
      return cube;
    }

    cube += 1;
  }
}

int main() {

  int NumberOfInputs = 0;

  cin >> NumberOfInputs;

  long arr[NumberOfInputs];

  for (int i = 0; i < NumberOfInputs; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < NumberOfInputs; i++) {

    cout << FindCube888(arr[i]) << "\n";
  }
  cout << "\n";

  return 0;
}