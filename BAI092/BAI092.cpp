#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 1 - x;
	float t = x;
	float m = 1;
	int i = 3;
	int dau = +1;
	while (i <= (2 * n + 1))
	{
		t = t * x * x;
		m = m * i * (i - 1);
		S = S + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << S;

	return 0;
}