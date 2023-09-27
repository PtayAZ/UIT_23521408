#include <iostream>

using namespace std;
int main()
{
	int n, dv;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 == 0) flag =0;
		t = t / 10;
	}
	if (flag == 1) cout << "so toan le";
	else cout << " Ko toan le";

	return 0;
}