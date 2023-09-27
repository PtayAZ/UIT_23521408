#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    float r;
    cout << " Nhap r: ";
    cin >> r;
    float S = M_PI * r * r;
    cout << "Dien tich hinh tron: " << S << endl;

    return 0;
}