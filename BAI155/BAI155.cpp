#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int i = 0;
	while (i <= n)
	{
		t = t * 2;
		cout << t << " ";
		i = i + 1;
	}

	return 0;
}