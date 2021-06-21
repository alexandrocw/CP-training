#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i = 1;
    string output = "I hate ";

    cin >> n;

    while(i != n) {
        if(i%2==1) {
            output += "that I love ";
        } else {
            output += "that I hate ";
        }
        i++;
    }
    output += "it";

    cout << output;

    return 0;
}
