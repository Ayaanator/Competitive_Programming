#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;

    cin >> a >> b >> x >> y;

    int adding = (a*2) + (x*2) + b + y;
    int perimeter = adding;
    //cout << adding << endl;
    //cout << (a*2) << " + " << (x*2) << " + " << b << " + " << y << endl;

    if(b > y) {
        perimeter += b - y;
        //cout << b - y << endl;
    } else if (b < y) {
        perimeter += y - b;
        //cout << y - b << endl;
    }

    cout << perimeter << endl;

    return 0;
}