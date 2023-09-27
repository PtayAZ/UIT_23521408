#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * sin(x);
		S = S + t;
		i = i + 1;
	}
	cout << S;

	return 0;
}