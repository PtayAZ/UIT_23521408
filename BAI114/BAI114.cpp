#include <iostream>

using namespace std;
int main()
{
	int n;
	float ahh;
	cin >> n;
	float at = -2;
	float tt = 3;
	float pp = 7;
	int i = 2;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i = i + 1;
		at = ahh;
	}
	cout << ahh;

	return 0;
}