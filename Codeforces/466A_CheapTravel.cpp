#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << std::min({n*a, int(ceil(float(n)/float(m))*b), n/m * b + n%m * a});
}
