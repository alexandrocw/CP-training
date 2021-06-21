#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, cnt = 0;
    string s;

    cin >> n;

    while(n--) {
        cin >> s;
        if(s.compare("Tetrahedron") == 0) {
            cnt += 4;
        } else if (s.compare("Cube") == 0) {
            cnt += 6;
        } else if (s.compare("Octahedron") == 0) {
            cnt += 8;
        } else if (s.compare("Dodecahedron") == 0) {
            cnt += 12;
        } else if (s.compare("Icosahedron") == 0) {
            cnt += 20;
        }
    }

    cout << cnt;

    return 0;
}
