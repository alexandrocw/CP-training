#include <iostream>
#define ll long long

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while(t--) {
        ll n, x, t;
        cin >> n >> x >> t;

        cout << t*n*x/x - t*(n-1)*x/x << "\n";
    }

    return 0;
}
