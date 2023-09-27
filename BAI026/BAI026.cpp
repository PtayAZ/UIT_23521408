#include <iostream>

using namespace std;
int main()
{
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Sau khi hoan doi, gia tri cua a va b la: " << a << " " << b << endl;

    return 0;
}