#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int sum = 0;
    string word;
    bool alphabet[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cin >> word;

    for(int i = 0; i < word.length(); i++) {
        alphabet[int(word[i]-97)] = 1;
    }

    for(int i = 0; i < 26; i++) {
        if(alphabet[i]) {
            sum++;
        }
    }

    sum % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";

    return 0;
}
