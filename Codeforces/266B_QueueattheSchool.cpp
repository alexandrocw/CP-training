#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    string que;

    cin >> n >> t;
    cin >> que;

    while(t--) {
        for(int i = 0; i < que.length() - 1; i++) {
            if(que[i] == 'B' && que[i+1] == 'G') {
                que[i] = 'G';
                que[i+1] = 'B';
                i++;
            }
        }
    }

    cout << que;

    return 0;
}
