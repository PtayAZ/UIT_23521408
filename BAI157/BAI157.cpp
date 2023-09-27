#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 0;
	int i = 1;
	while (i <= n)
	{
		S = S + (float)1 / i;
		cout << S << " ";
		i = i + 1;
	}

	return 0;
}