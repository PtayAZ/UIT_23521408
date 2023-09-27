#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	float ahh;
	cin >> n;
	float at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	cout << ahh;

	return 0;
}