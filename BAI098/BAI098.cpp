#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 0;
	int i = 2;
	while (i <= n)
	{
		S = pow(i + S, (float)1 / i);
		i = i + 1;
	}
	cout << S;

	return 0;
}