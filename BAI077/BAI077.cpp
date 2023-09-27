#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n,k;
	cin >> k >> n;
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + pow(i, k);
		i = i + 1;
	}
	cout << S;

	return 0;
}