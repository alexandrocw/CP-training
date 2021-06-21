#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string solve(vector<int> v, int n) {
    for(int i = 0; i < n - 1; i++) {
        if(abs(v[i]-v[i+1]) > 1) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int n, e;
        vector<int> v;
        cin >> n;
        for(int i = 0; i< n; i++) {
            cin >> e;
            v.push_back(e);
        }
        sort(v.begin(), v.end());
        cout << solve(v, n) << "\n";
    }

    return 0;
}
