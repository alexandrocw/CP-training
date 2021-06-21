#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void solve() {
    int n, m;

    cin >> n >> m;

    vector<string> matrix(n)(m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(strcmp(matrix[i][j], "R")==0) {
                if(strcmp(matrix[i][j], "W"))
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
