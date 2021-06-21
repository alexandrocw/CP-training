#include <iostream>

using namespace std;

int sum, maximum = 0;

void solve() {
    int a, b;
    cin >> a >> b;

    sum -= a;
    sum += b;
    if (sum > maximum) {
        maximum = sum;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    while(n--) {
        solve();
    }

    cout << maximum;
    cout << flush;

    return 0;
}
