#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 0;
	float m = 0;
	int i = 1;
	int dau = +1;
	while (i <= n)
	{
		m = m + i;
		S = S + (float)dau / m;
		i = i + 1;
		dau = -dau;
	}
	cout << S;

	return 0;
}