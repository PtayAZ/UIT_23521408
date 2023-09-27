#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float S = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		S = S + i * t;
		i = i + 1;
	}
	cout << S;

	return 0;
}