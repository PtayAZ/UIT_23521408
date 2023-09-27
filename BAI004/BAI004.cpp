#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    float r;
    cout << " Nhap r: ";
    cin >> r;
    float S = 4 * M_PI * r * r;
    cout << "Dien tich be mat hinh cau: " << S << endl;

    return 0;
}