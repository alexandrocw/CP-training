#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string word;

    cin >> word;

    if(word[0] >= 97) {
        word[0] = word[0] - 32;
    }

    cout << word;

    return 0;
}
