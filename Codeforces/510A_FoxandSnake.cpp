#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    bool pos = 1;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i%2 == 0) {
                cout << "#";
            } else {
                if(!pos && j == 0) {
                    cout << "#";
                } else if(pos && j == m - 1) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        if(i%2 == 1) {
            pos ^= 1;
        }
        cout << "\n";
    }

    return 0;
}
