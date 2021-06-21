#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


void solve(vector<int> arr) {
    int max = *max_element(arr.begin(), arr.end()), min = *min_element(arr.begin(), arr.end()), pos[2] = {-1, -1}, temp[2] = {-1, -1};
    for(int iter3 = 0; iter3 < arr.size(); iter3++) {
        if(arr[iter3] == max && pos[0] == -1) {
            pos[0] = iter3+1;
        } else if(arr[iter3] == min) {
            pos[1] = iter3+1;
        }
    }

    temp[0] = pos[0];
    temp[1] = pos[1];

    if(abs(pos[0]-pos[1]) > abs(arr.size() - pos[0]) + 1) {
        pos[0] = abs(arr.size() - pos[0]) + 1;
    }
    if(abs(pos[1]-pos[0]) > abs(arr.size() - pos[1]) + 1) {
        pos[1] = abs(arr.size() - pos[1]) + 1;
    }

    if((abs(pos[0]-pos[1]) > abs(arr.size() - pos[0]) + 1) || (abs(pos[1]-pos[0]) > abs(arr.size() - pos[1]) + 1)) {
        if(pos[0] > pos[1]) {
            pos[0] -= pos[1];
        } else {
            pos[1] -= pos[0];
        }
    }


    cout << pos[0] + pos[1] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);

    int i, n, elemen;
    vector<int> arr;

    cin >> i;

    for(int iter = 0; iter < i; iter++) {
        cin >> n;
        for(int iter2 = 0; iter2 < n; iter2++) {
            cin >> elemen;
            arr.push_back(elemen);
        }
        solve(arr);
        arr.clear();
    }

    return 0;
}
