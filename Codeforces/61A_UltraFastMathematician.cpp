#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b, res="";

    cin >> a >> b;

    for(int i = 0; i < a.size(); i++) {
        if(a[i] == b[i]) {
            res+= "0";
        } else {
            res+= "1";
        }
    }

    cout << res;

    return 0;
}
