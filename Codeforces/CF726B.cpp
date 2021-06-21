#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        int p1[2], p2[2];
        vector<int> pos{m - j + n - i, m - j + i, j + i, j + n - i};
        int max_pos = max_element(pos.begin(), pos.end()) - pos.begin(); // BR, UR, UL, BL
        switch(max_pos) {
            case 0:
                p1[0] = n; p1[1] = m;
                p2[0] = n; p2[1] = 1;
                break;
            case 1:
                p1[0] = 1; p1[1] = m;
                p2[0] = 1; p2[1] = 1;
                break;
            case 2:
                p1[0] = 1; p1[1] = 1;
                p2[0] = m; p2[1] = 1;
                break;
            case 3:
                p1[0] = n; p1[1] = 1;
                p2[0] = m; p2[1] = n;
                break;
            default:
                break;
        }

        cout << p1[0] << " " << p1[1] << " " << p2[0] << " " << p2[1] << "\n";

    }
    return 0;
}
