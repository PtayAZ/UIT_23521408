#include <iostream>

using namespace std;
int main()
{
	float a, b, x;
	cin >> a >> b;
	if (a == 0)
	{
		if (b == 0) cout << "Vo so nghiem";
		else cout << "Vo nghiem";
	}
	else 
	{
		x = -b / a;
		cout << x;
	}


	return 0;
}