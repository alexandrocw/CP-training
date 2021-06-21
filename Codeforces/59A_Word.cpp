#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string word;
    int lower = 0, upper = 0;

    cin >> word;

    for(int i = 0; i < word.length(); i++) {
        if(word[i] < 97) {
            upper++;
        } else {
            lower++;
        }
    }

    if(upper <= lower) {
        for(int i = 0; i < word.length(); i++) {
            if(word[i] >= 97) continue;
            word[i] = word[i] + 32;
        }
    } else {
        for(int i = 0; i < word.length(); i++) {
            if(word[i] < 97) continue;
            word[i] = word[i] - 32;
        }
    }

    cout << word;

    return 0;
}
