#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--) {
        int a, b;

        cin >> a >> b;

        a%b == 0 ? cout << 0 << "\n" : cout << b - a%b << "\n";
    }

    return 0;
}
