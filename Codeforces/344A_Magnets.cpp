#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, countMagnet = 1;
    string magnet, magnets="";

    cin >> n;


    while(n--) {
        cin >> magnet;
        magnets += magnet;
    }

    for(int i = 0; i < magnets.size() - 1; i++) {
        if(magnets[i] == magnets[i+1]) {
            countMagnet++;
            i++;
        }
    }

    cout << countMagnet;

    return 0;
}
