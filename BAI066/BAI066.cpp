#include <iostream>

using namespace std;
int main()
{
	int n,dv;
	cin >> n;
	int flag = 0;
	int t = n;
	while (t != 0) 
	{
		dv = t % 10;
		if (dv % 2 == 0) flag = 1;
		t = t / 10;
	}
	if (flag == 1) cout << "Ton tai";
	else cout << "Ko ton tai";

	return 0;
}