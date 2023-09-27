#include <iostream>

using namespace std;
int main()
{
	int n;
	float ahh;
	cin >> n;
	float att = -1;
	float at = 3;
	float t = 2;
	int i = 2;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i = i + 1;
		att = at;
		at = ahh;
	}
	cout << ahh;

	return 0;
}