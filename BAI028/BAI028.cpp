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
        S = S + i * i;
        i = i + 1;
    }
    cout << "Tong binh phuong cua cac so tu 1 den " << n << " la: " << S << endl;

    return 0;
}