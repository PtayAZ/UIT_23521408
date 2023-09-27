#include <iostream>

using namespace std;
int main() 
{
	int n;
	cin >> n;
	float S = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		S = S + t;
		i = i + 1;
	}
	cout << S;

	return 0;
}