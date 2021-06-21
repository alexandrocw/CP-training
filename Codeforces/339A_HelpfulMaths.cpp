#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    string expression, res;
    int n;
    vector<int> arr;
    stringstream Stream;

    cin >> expression;
    n = expression.size();

    for(int i = 0; i < n; i+=2) {
        arr.push_back(expression[i]);
    }

    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        Stream << arr[i]-48 << "+";
    }

    res = Stream.str();

    // Remove trailing +
    if(!res.empty()) {
        res.erase(res.size()-1);
    }

    cout << res;

    return 0;
}
