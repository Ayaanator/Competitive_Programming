#include <iostream>
#include <string.h>
#include <cstdlib>
#include <sstream>

using namespace std;

bool is_number(char c) {
    int l = int(c);

    if(l <= 122 && l >= 97) {
        return false;
    } else {
        return true;
    }
}

int main() {

    /*stringstream test("5");
    int noombah = 0;
    test >> noombah;
    cout << noombah * 2 << endl;*/

    /*cout << (is_number('0') && is_number('d') == false) << endl;
    cout << (is_number('0') && is_number('d') == false) << endl;*/

    string rle;
    string number;
    int n = 0;

    cin >> rle;
    cin >> n;

    if(n == 0) {
        cout << rle[0];
        return 0;
    }

    int counter = n;
    char previous_char = 's';
    char target_char;
    char previous;

    while(counter > 0) {
        for(int i = 0; i < rle.length(); i++) {
            if(counter > 0) {

                char c = rle[i];

                if(is_number(c) == false) {
                    previous = c;
                    previous_char = c;
                } else if(is_number(c) && is_number(previous) == false) {
                    number = c;
                    previous = c;
                } else if(is_number(c) && is_number(previous)) {
                    number.push_back(c);
                    previous = c;
                }

                if(is_number(rle[i])) {
                    stringstream stream(number);
                    int k = 0;
                    stream >> k;

                    if(i == rle.length() - 1) {
                        counter -= k;
                        number = "";
                    } else if(is_number(rle[i + 1]) == false) {
                        counter -= k;
                        number = "";
                    }
                }

                if(counter < 0) {
                    target_char = previous_char;
                } else if (counter == 0) {
                    if(i == rle.length() - 1) {
                        target_char = rle[0];
                    } else if(is_number(rle[i + 1]) == false) {
                        target_char = rle[i + 1];
                    }
                }
            }   
        }
    }

    cout << target_char << endl;

    return 0;
}