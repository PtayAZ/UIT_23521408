#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 1 + x;
	float t = x;
	int m = 1;
	int i = 3;
	while (i <= (2 * n + 1))
	{
		t = t * x * x;
		m = m * i * (i - 1);
		S = S + t / m;
		i = i + 2;
	}
	cout << S;

	return 0;
}