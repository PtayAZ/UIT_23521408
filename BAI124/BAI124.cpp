#include <iostream>

using namespace std;
int main()
{
	int n;
	float ahh, bhh;
	cin >> n;
	float at = 2;
	float bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2*at*bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh;

	return 0;
}