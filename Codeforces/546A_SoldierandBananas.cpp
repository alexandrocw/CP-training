#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int k, n, w, sum = 0;

    cin >> k >> n >> w;

    for(int i = 0; i < w; i++) {
        sum += (i+1)*k;
    }

    sum - n >= 0 ? cout << sum - n : cout << 0;

    return 0;
}
