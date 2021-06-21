#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, e, sum = 0, cnt = 0;
        vector<int> arr;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> e;
            arr.push_back(e);
            sum += e;
        }
        while(sum != n) {
            if (sum > n) {
                n++;
            } else {
                n++;
                sum += n - sum;
            }
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
