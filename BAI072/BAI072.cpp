#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 0;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		S = S + (float)1/m;
		i = i + 1;
	}
	cout << S;

	return 0;
}