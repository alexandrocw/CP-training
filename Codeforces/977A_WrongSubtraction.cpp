#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    while(k) {
        if(n % 10 != 0) {
            n--;
        } else {
            n /= 10;
        }
        k--;
    }
    cout << n;

    return 0;
}
