#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, temp, pass, jumlah = 0;
    vector<int> scores;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        scores.push_back(temp);
        if(i == k-1 && temp >= 0) {
            pass = temp;
        }
    }

    for(int i = 0; i < scores.size(); i++) {
        if(scores[i] >= pass && pass >= 0 && scores[i] > 0) {
            jumlah++;
        }
    }

    cout << jumlah;

    return 0;
}
