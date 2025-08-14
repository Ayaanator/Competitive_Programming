#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int counter = 0;

    cin >> num;

    int max_five = num / 5;
    
    for(int i = 0; i <= max_five; i++) {
        int remainder = num - 5 * i;

        if(remainder % 4 == 0 && remainder >= 0) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
};