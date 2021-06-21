#include <iostream>

using namespace std;

bool checkPrime(int n) {
    for(int i = 2; i <= n/2; i++) {
        if(n%i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i = 4;
    cin >> n;

    checkPrime(n-4) ? cout << 4 << " " << n-4 : cout << 9 << " " << n-9;

    return 0;
}
