#include <iostream>

using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = x;
	float t = x;
	int i = 3;
	while (i <= (2*n+1))
	{
		t = t * x * x;
		S = S + t;
		i = i + 2;
	}
	cout << S;

	return 0;
}