#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    cout << n/100 + n%100 / 20 + n %100%20 / 10 + n%100%20%10 / 5 + n%100%20%10%5;

    return 0;
}
