#include <iostream>

using namespace std;

string solve(int a[]) {
    for(int i = 0; i < 26; i++) {
        if(a[i] == 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, alphabet[26] = {0};
    cin >> n;

    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 97) {
            alphabet[s[i]-97]++;
        } else {
            alphabet[s[i]-65]++;
        }
    }

    cout << solve(alphabet);

    return 0;
}
