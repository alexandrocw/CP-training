#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, p, q, res = 1;

    cin >> n;

    int arr[n] = {false};

    cin >> p;

    while(p--) {
        int m;
        cin >> m;
        arr[m-1] = true;
    }

    cin >> q;
    while(q--) {
        int m;
        cin >> m;
        arr[m-1] = true;
    }

    for(int i = 0; i < n; i++) {
        if(!arr[i]) {
            res = 0;
        }
    }

    if(res) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }


    return 0;
}
