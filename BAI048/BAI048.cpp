#include <iostream>

using namespace std;
int main()
{
    int n;
    float x;
    cin >> x >> n;
    float t = x;
    int i = 1;
    while (i <= n)
    {
        t = t * (x + i);
        i = i + 1;
    }
    cout << t;

    return 0;
}