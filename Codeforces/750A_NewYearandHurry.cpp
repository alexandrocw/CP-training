#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, cnt = 0, i = 1;
    cin >> n >> k;

    int time = 240 - k;
    while(time - 5 * i >= 0) {
        time -= 5*i;
        i++;
        cnt++;
    }
    cnt > n ? cout << n : cout << cnt;

    return 0;
}
