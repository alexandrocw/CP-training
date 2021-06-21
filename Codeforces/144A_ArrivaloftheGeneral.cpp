#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, e, min_pos;
    cin >> n;

    vector<int> v;

    while(n--) {
        cin >> e;
        v.push_back(e);
    }

    int min_e = *min_element(v.begin(), v.end()), max_pos = max_element(v.begin(), v.end()) - v.begin();

    for(int i = 0; i < v.size(); i++) {
        if(v[i] <= min_e) {
            min_pos = i; // reposition min
        }
    }
    if(max_pos > min_pos) {
        cout << (v.size() - 1 - min_pos) + max_pos - 1;
    } else {
        cout << (v.size() - 1 - min_pos) + max_pos;
    }

    return 0;
}
