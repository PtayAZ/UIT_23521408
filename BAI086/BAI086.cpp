#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float t = 1;
	int i = 2;
	int dau = -1;
	while (i <= 2*n)
	{
		t = t * x * x;
		S = S + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << S;

	return 0;
}