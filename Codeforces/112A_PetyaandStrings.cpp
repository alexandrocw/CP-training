#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string n, m;
    cin >> n >> m;

    for(int i = 0; i < n.size(); i++) {
        n[i] = (n[i] - 65) % 32;
        m[i] = (m[i] - 65) % 32;
        if(n[i] < m[i]) {
            cout << "-1";
            break;
        } else if(n[i] > m[i]) {
            cout << "1";
            break;
        } else if(i == n.size()-1) {
            cout << "0";
        }
    }

    return 0;
}
