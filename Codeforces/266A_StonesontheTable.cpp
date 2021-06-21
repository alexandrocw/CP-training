#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, jumlah = 0;

    string word;
    char letter;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> letter;
        word += letter;
    }

    for(int i = 0; i < n-1; i++) {
        if(word[i] == word[i+1]) {
            jumlah++;
        }
    }

    cout << jumlah;

    return 0;
}
