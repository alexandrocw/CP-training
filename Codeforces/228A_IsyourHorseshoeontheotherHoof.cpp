#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr(4);

    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    set<int> s(arr.begin(), arr.end());

    cout << arr.size() - s.size();

    return 0;
}
