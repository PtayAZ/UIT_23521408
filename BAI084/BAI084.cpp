#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		S = S + t;
		i = i + 1;
	}
	cout << S;

	return 0;
}