#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    float S = 0;
    int i = 1;
    while (i <= n)
    {
        S = S + (float)1 / i;
        i = i + 1;
    }
    cout << "Tong nguoc cua cac so tu 1 den " << n << " la: " << S << endl;

    return 0;
}