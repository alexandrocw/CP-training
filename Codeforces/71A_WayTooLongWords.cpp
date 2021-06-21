#include <iostream>

using namespace std;

void solve(string word) {
    cout << word[0] << word.length() - 2 << word[word.length()-1];
}

int main() {
    string word;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> word;
        if(word.length() > 10) {
            solve(word);
        } else {
            cout << word;
        }
        cout << endl;
    }

    return 0;
}
