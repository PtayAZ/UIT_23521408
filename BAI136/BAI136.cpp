#include <iostream>

using namespace std;
int main()
{
	int n, x, y;
	bool dk1, dk2;
	cin >> x >> y;
	n = x;
	while (n <= y)
	{
		dk1 = ((n % 4 == 0) && (n % 100 != 0));
		dk2 = (n % 400 == 0);
		if (dk1 or dk2) cout << n <<" ";
		n = n + 1;
	}

	return 0;

}