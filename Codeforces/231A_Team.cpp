#include <iostream>

using namespace std;

int main() {
    int n, solved, sum=0, problem_solved=0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> solved;
            if(solved == 1) {
                sum++;
            }
        }
        if(sum >= 2) {
            problem_solved++;
        }

        sum = 0;
    }
    cout << problem_solved;

    return 0;
}
