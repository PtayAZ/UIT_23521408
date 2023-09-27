#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	float S = 0;
	while (i < n)
	{
		if (n % i == 0) S = S + i;
		i = i + 1;
	}
	if (S == n) cout << "so hoan thien";
	else cout << " Ko hoan thien";

	return 0;
}