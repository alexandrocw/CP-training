#include <iostream>
#include <sstream>
#include <set>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    char i;
    vector<char> res;

    getline(cin, s);

    stringstream ss(s);

    while(ss >> i) {
        if(i == '{' || i == '}' || i == ',') {
            continue;
        } else {
            res.push_back(i);
        }
    }

    set<char> sss(res.begin(), res.end());

    cout << sss.size();


    return 0;
}
