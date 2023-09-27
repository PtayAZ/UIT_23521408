#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = -1;
	float t = 1;
	float m = 1;
	int i = 2;
	int dau = +1;
	while (i <= 2 * n)
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