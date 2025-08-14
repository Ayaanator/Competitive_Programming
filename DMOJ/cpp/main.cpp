#include <bits/stdc++.h>
#include <vector>

using namespace std;

long find_cube(int k) {    
    while(true) {
        long x = k * k * k;

        if(x % 1000 == 888) {
            return k;
        }

        k++;
    }
}

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
    long t = 0;
    long k = 0;

    cin >> t;

    vector<long> list;

    for(int i = 0; i < t; i++) {
        cin >> k;
        list.push_back(find_cube(k));
    }

    for(auto i : list) {
        cout << i << "\n";
    }

    cout << endl;

    return 0;
}