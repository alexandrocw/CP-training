#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int n[25], pos, x, y;

    for(int i = 0; i < 25; i++) {
        cin >> n[i];
        if(n[i] == 1) {
            pos = i+1;
            break;
        }
    }
    y = abs(ceil(pos/5.0)-3);
    if(pos%5 == 0) {
        x = abs(pos%5+1-3);
    } else {
        x = abs(pos%5-3);
    }

    cout << x+y;

    return 0;
}
