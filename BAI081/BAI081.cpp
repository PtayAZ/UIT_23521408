#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		S = S + (float)1 / m;
		i = i + 1;
	}
	cout << S;

	return 0;
}