#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, cnt = 0;
    vector<int> h_arr, a_arr;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        h_arr.push_back(h);
        a_arr.push_back(a);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(h_arr[i] == a_arr[j]) cnt++;
        }
    }

    cout << cnt;

    return 0;
}
