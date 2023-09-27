#include <iostream>

using namespace std;
int main()
{
    int n, dv;
    cin >> n;
    float tich = 1;
    int t = n;
    while (t != 0)
    {
        dv = t % 10;
        tich = tich * dv;
        t = t / 10;
    }
    cout << tich;

    return 0;
}