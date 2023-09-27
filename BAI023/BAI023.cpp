#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int hc = (n / 10) % 10;
    cout << "Chu so hang chuc la: " << hc << endl;

    return 0;
}