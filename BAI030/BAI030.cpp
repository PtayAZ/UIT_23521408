#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    float S = 0;
    int i = 2;
    while (i <= 2 * n)
    {
        S = S + (float)1 / i;
        i = i + 2;
    }
    cout << "Tong nguoc cua cac so chan tu 2 den " << 2 * n << " la: " << S << endl;

    return 0;
}