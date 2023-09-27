#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    int ht = (n / 100) % 10;
    cout << "Chu so hang tram la: " << ht << endl;

    return 0;
}