#include <iostream>

using namespace std;
int main()
{
    int n, dv;
    cin >> n;
    int dem = 0;
    int t = n;
    while (t != 0)
    {
        dv = t % 10;
        if (dv % 2 != 0) dem++;
        t = t / 10;
    }
    cout << dem;

    return 0;
}