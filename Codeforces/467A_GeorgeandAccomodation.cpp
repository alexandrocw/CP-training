#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, p, q, room=0;

    cin >> n;

    while(n--) {
        cin >> p >> q;
        if(q - p >= 2) {
            room++;
        }
    }

    cout << room;

    return 0;
}
