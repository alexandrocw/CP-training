#include <iostream>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, min_e, max_e, cnt = 0, e;
    cin >> n;
    cin >> e;
    min_e = e;
    max_e = e;
    while(--n) {
        cin >> e;
        if(e < min_e) {
            cnt++;
            min_e = e;
        } else if(e > max_e) {
            cnt++;
            max_e = e;
        }
    }

    cout << cnt;

    return 0;
}
