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
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << " " << bhh;

	return 0;
}