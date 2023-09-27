#include <iostream>

using namespace std;
int main()
{
    int n, dv;
    cin >> n;
    int lc = n % 10;
    int t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv < lc) lc = dv;
        t = t / 10;
    }
    cout << lc;

    return 0;
}