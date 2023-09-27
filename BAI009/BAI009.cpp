#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float r;
    cout << "Nhap r, n: ";
    cin >> r >> n;
    float S = (n * r * r * sin(2 * M_PI / n)) / 2;
    cout << "Dien tich da giac deu: " << S << endl;

    return 0;
}