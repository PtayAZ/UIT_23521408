#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC;
	cin >> xA >> yA >> xB >> yB >> xC >> yC;
	float a = sqrt((xB - xA) * (xB - xA) + (yB - yA) * (yB - yA));
	float b = sqrt((xC - xA) * (xC - xA) + (yC - yA) * (yC - yA));
	float c = sqrt((xC - xB) * (xC - xB) + (yC - yB) * (yC - yB));
	if (a + b > c && a + c > b && b + c > a) cout << "La tam giac";
	else cout << "Ko La tam giac";

	return 0;
}