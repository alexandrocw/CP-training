#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, anton=0, danik=0;
    string games;

    cin >> n;
    cin >> games;

    for(int i = 0; i < games.length(); i++) {
        if(games[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }

    if(anton > danik) {
        cout << "Anton";
    } else if (danik > anton) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

    return 0;
}
