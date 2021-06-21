#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;
        b == a ? cout << 0 : (b-a)%10 == 0 ? cout << abs(b-a)/10 : cout << abs(b-a)/10 + 1;
        cout << "\n";
    }

    return 0;
}
