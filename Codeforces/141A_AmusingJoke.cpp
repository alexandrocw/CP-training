#include <iostream>

using namespace std;

string solve(int arr1[26], int arr2[26], int arr3[26]) {
    for(int i = 0; i < 26; i++) {
        if(arr1[i] + arr2[i] != arr3[i]) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b, c;
    int arr1[26] = {0}, arr2[26] = {0}, arr3[26] = {0};

    cin >> a >> b >> c;

    for(int i = 0; i < a.size(); i++) {
        arr1[a[i]-65]++;
    }
    for(int i = 0; i < b.size(); i++) {
        arr2[b[i]-65]++;
    }
    for(int i = 0; i < c.size(); i++) {
        arr3[c[i]-65]++;
    }

    cout << solve(arr1, arr2, arr3);



    return 0;
}
