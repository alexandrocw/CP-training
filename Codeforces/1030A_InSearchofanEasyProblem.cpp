#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, opinion;

    cin >> n;

    while(n--) {
        cin >> opinion;
        if(opinion == 1) {
            cout << "HARD";
            break;
        } else if (n == 0) {
            cout << "EASY";
        }
    }

    return 0;
}
