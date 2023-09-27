#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    float r;
    cout << " Nhap r: ";
    cin >> r;
    float V = (float)4 / 3 * (M_PI * r * r * r);
    cout << "The tich hinh cau: " << V << endl;

    return 0;
}