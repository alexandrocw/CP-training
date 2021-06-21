#include <iostream>

using namespace std;

int main()
{
    int w;
    bool even=false;
    cin >> w;

    for(int factor = 2; factor <= w/2; factor+=2) {
            if((w-factor) % 2 == 0) {
                even = true;
            }
    }

    if(even){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
