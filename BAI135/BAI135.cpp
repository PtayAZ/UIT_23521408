#include <iostream>

using namespace std;
int main()
{
	int n;
	bool dk1, dk2;
	cin >> n;
	dk1 = ((n % 4 == 0) && (n % 100 != 0));
	dk2 = (n % 400 == 0);
	if (dk1 or dk2) cout << "n la nam nhuan";
	else cout << "n ko la nam nhuan";

	return 0;

}