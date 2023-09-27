#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

int main()
{
    float r;
    cout << " Nhap r: ";
    cin >> r;
    float P = 2 * M_PI * r;
    cout << "Chu vi hinh tron: " << P << endl;

    return 0;
}