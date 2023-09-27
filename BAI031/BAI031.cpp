#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= (2 * n + 1))
    {
        S = S + (float)1 / i;
        i = i + 2;
    }
    cout << "Tong nguoc cua cac so tu 1 den " << 2 * n + 1 << " la: " << S << endl;

    return 0;
}