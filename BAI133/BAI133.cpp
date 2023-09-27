#include <iostream>

using namespace std;

int main()
{
    float x, y, z;
    cin >> x >> y >> z;

    if (x + y > z && x + z > y && y + z > x)
    {
        if (x == y && y == z) cout << "Tam giac deu";
        else if (x * x == y * y + z * z || y * y == z * z + x * x || z * z == y * y + x * x)
        {
            if (x == y || y == z || z == x) cout << "Tam giac vuong can";
            else cout << "Tam giac vuong";
        }
        else if (x == y || y == z || z == x) cout << "Tam giac can";
        else cout << "Tam giac thuong";
    }
    else cout << "Khong la tam giac";

    return 0;
}