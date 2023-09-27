#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x1, y1;
	cout << "Nhap x1, y1: ";
	cin >> x1 >> y1;
	float x2, y2;
	cout << "Nhap x2, y2: ";
	cin >> x2 >> y2;
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "Khoang cach giua 2 diem: " << d;
	
	return 0;
}