#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k, x, e, cnt = 1;
    cin >> n >> k >> x;
    vector<ll> v, v2;
    for(ll i = 0; i < n; i++) {
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    for(ll i = 0; i < n-1; i++) {
        if(v[i+1]-v[i] > x) {
            v2.push_back((v[i+1]-v[i])/x);
        }
    }
    sort(v2.begin(), v2.end());
    for(ll i = 0; i < v2.size(); i++) {
        if(k && k-v2[i] >= 0) {
            k -= v2[i];
        } else {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
