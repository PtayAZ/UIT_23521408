#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= n)
    {
        if (n % i == 0) S = S + i;
        i = i + 1;
    }
    cout << S;

    return 0;
}