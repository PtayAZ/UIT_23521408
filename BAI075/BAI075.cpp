#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		S = S + t / m;
		i = i + 2;
	}
	cout << S;

	return 0;
}