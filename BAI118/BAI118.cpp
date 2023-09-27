#include <iostream>

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
		ahh = (-9 * at - 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	cout << ahh;

	return 0;
}