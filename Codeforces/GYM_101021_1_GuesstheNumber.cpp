#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int l = 1, r = 1000000;

    while(l != r) {
        int mid = (l + r + 1) / 2;
        cout << mid << endl;
        cout << flush;

        char response[3];
        cin >> response;

        if(strcmp(response, "<") == 0) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }

    cout << "! " << l << endl;
    cout << flush;

    return 0;
}
