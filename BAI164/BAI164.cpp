#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 1;
	int i = 1;
	while (i <= n);
	{
		S = (float)1 / (1 + S);
		i = i + 1;
	}
	cout << S;

	return 0;
}