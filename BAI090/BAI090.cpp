#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		S = S + (float)dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << S;

	return 0;
}