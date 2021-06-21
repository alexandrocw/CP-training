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
        int n, e;
        vector<int> v;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> e;
            v.push_back(e);
        }
        sort(v.begin(), v.end());
        int temp = v[0];
        while (abs(temp - v[1]) <= abs(v[n-1] - v[0]) && v.size() > 2) {
            rotate(v.begin(), v.begin()+1, v.end());

            int temp = v[0];
        }
        for(int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
