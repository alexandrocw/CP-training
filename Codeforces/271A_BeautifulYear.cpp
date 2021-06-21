#include <iostream>
#include <set>

using namespace std;

bool check_distinct(int year) {
    string s = to_string(year);
    set<int> uniq(s.begin(), s.end());
    if(uniq.size() == s.size()) {
        return true;
    } else return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int year;
    bool solve = false;

    cin >> year;

    while(!solve) {
        year++;
        if(check_distinct(year)) {
            solve = true;
        }
    }

    cout << year;

    return 0;
}
