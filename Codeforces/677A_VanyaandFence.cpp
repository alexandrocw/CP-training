#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, h, width = 0, person;

    cin >> n >> h;

    for(int i = 0; i < n; i++) {
        cin >> person;
        if(person > h) {
            width += 2;
        } else width++;
    }

    cout << width;

    return 0;
}
