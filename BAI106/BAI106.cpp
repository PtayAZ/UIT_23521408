#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x;
	cin >> x;
	float xx = (x * M_PI) / 180;
	float S = xx;
	float t = xx;
	float m	 = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;	
		e = t / m;
		S = S + dau*e;
		dau = -dau;
		i = i + 2;
	}
	cout << S;
	return 0;

}
