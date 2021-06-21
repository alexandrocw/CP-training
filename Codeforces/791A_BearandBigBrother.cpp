#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    float a, b;

    cin >> a >> b;

    /*
    3^n a > 2^n b
    n log3 + log a > n log 2 + log b
    n(log3-log2) > log b-loga
    n > log(b/a)/log(3/2)
    n > ceil(log(b/a)/0.176)
    */
    cout << ceil(log(b/a)/log(3.0/2.0) + 0.00001);

    return 0;
}
