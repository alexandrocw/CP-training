#include <iostream>


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int states, n=0;
    string state;

    cin >> states;

    for(int i = 0; i < states; i++) {
        cin >> state;
        if(state[0] == '+' || state[2] == '+') {
            n++;
        } else if (state[0] == '-' || state[2] == '-') {
            n--;
        }
    }

    cout << n;

    return 0;
}
