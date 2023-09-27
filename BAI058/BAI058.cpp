#include <iostream>

using namespace std;
int main()
{
    int n, dv;
    cin >> n;
    float S = 0;
    int t = n;
    while (t != 0)
    {
        dv = t % 10;
        S = S + dv;
        t = t / 10;
    }
    cout << S;

    return 0;
}