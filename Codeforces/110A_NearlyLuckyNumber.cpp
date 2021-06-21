#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string number;
    float lucky = 0;

    cin >> number;

    for(int i = 0; i < number.length(); i++) {
        if(number[i] == '4' || number[i] == '7') {
            lucky++;
        }
    }


    if(lucky/4==1 || lucky/7==1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
