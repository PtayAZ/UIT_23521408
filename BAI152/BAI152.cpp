#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, du;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		du = t % 3;
		if (du != 0) flag = 0;
		t = t / 3;
	}
	if (flag == 1) cout << "la dang";
	else cout << "ko la dang";

	return 0;
}