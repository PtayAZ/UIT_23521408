#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= n)
    {
        S = S + (float)1 / (sqrt(i) + sqrt(i + 1));
        i = i + 1;
    }
    cout << S;

    return 0;
}