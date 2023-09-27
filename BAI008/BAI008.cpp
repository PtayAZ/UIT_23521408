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
    float p = 2 * n * r * sin(M_PI / n);
    cout << "Chu vi da giac deu: " << p << endl;

    return 0;
}