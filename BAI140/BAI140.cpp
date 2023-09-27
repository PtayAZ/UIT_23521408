#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float a, b, c, d;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
		{
			float x = -b / (2 * a);
			cout << x;
		}
		else cout << "Vo nghiem";
	}
	else 
	{
		float x1 = (-b + sqrt(d)) / (2 * a);
		float x2 = (-b - sqrt(d)) / (2 * a);
		cout << x1 << " " << x2;
	}

	return 0;
}