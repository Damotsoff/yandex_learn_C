#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double D = pow(b, 2) - (4 * a * c);
    double x1 = 0;
    double x2 = 0;
    if (a == 0 && b != 0 && c != 0)
    {
        x1 = c / -b;
        cout << x1;
    }
    else if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << x1 << " " << x2;
    }

    else if (D == 0 && b != 0 && a != 0)
    {
        x1 = -b / (2 * a);
        cout << x1;
    }
    return 0;
}