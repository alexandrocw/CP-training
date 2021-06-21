#include <iostream>

using namespace std;

string solve(string n, string t) {
    for(int i = 0; i < n.length(); i++) {
        if(n[i] != t[t.length()-1-i]) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string n, t;

    cin >> n >> t;

    cout << solve(n, t);

    return 0;
}
