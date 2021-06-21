#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, pi;

    cin >> n;

    vector<int> arr(n);

    while(n--) {
        cin >> pi;
        arr[pi-1] = arr.size()-n;
    }

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
