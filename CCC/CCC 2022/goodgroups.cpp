#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool find(string name_1, string name_2, string name_3, string name) {
    if(name_1 == name || name_2 == name || name_3 == name) {
        return true;
    }

    return false;
}

int main() {
    unordered_map<string, unordered_set<string>> separate; 
    unordered_map<string, unordered_set<string>> stay;

    //unordered_map<string, vector<string>> stay;
    //unordered_map<string, unordered_set<string>> separate;

    int violations = 0;
    int k = 0;
    cin >> k;

    for(int i = 0; i < k; i++) {
        string n1;
        string n2;

        cin >> n1 >> n2;
        stay[n1].insert(n2);
        stay[n2].insert(n1);
    }

    cin >> k;

    for(int i = 0; i < k; i++) {
        string n1;
        string n2;

        cin >> n1 >> n2;
        separate[n1].insert(n2);
        separate[n2].insert(n1);
    }

    cin >> k;

    for(int i = 0; i < k; i++) {
        string n1;
        string n2;
        string n3;

        cin >> n1 >> n2 >> n3;
       
        vector<string> n;
        n.push_back(n1);
        n.push_back(n2);
        n.push_back(n3);

        // Check for y (non groups)
        if(separate.find(n1) != separate.end()) {
            if(separate[n1].count(n2) != 0 || separate[n1].count(n3) != 0) {
                violations++;
            }
        }

        if(separate.find(n2) != separate.end()) {
            if(separate[n2].count(n3) != 0) {
                violations++;
            }
        }

        // Check for x (groups)
        if(stay.find(n1) != stay.end()) {
            if(stay[n1].count(n2) == 0 && stay[n1].count(n3) == 0) {
                violations++;
            }
        }

        if(stay.find(n2) != stay.end()) {
            if(stay[n2].count(n3) == 0) {
                violations++;
            }
        }
    }

    cout << violations << endl;

    return 0;
};