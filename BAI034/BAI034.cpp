#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= (2 * n + 1))
    {
        S = S + (float)i / (i + 1);
        i = i + 2;
    }
    cout << S;

    return 0;
}