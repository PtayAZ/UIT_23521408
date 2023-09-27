#include <iostream>
 
using namespace std;
int main()
{
	float x;
	int n;
	cin >> x >> n;
	float S = 0;
	float t = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		S = S + t;
		i = i + 2;
	}
	cout << S;

	return 0;
}