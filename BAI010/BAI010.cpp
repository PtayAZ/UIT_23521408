#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x1, y1, x2, y2, x3, y3;
    cout << "Nhap x1, y1: ";
    cin >> x1 >> y1;
    cout << "Nhap x2, y2: ";
    cin >> x2 >> y2; 
    cout << "Nhap x3, y3: ";
    cin >> x3 >> y3;
    float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    float p = a + b + c;
    cout << "Chu vi tam giac: " << p << endl;

    return 0;
}