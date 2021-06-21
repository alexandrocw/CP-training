#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        vector<int> v;
        cin >> n;
        while(n) {
            if(n%10 != 0) cnt++;
            v.push_back(n%10);
            n /= 10;
        }
        cout << cnt << "\n";
        for(int i = 0; i < v.size(); i++) {
            if(v[i] != 0) cout << v[i] * pow(10, i) << " ";
        }
        cout << "\n";
    }

    return 0;
}
