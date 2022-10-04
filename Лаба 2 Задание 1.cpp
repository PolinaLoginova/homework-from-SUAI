
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //a)
    int x1;
    double f1;
    cin >> x1;

    if (x1 < 0)
    {
        f1 = 5 * x1 * x1 + 3 * x1;
    }

    if (x1 >= 0 && x1 <= 5)
    {
        f1 = 6 * sqrt(x1);
    }

    if (x1 > 5)
    {
        f1 = 107 - x1;
    }
    
    cout << f1 << '\n';

    //b)
    int x2;
    double f2;
    cin >> x2;

    if (x2 < -2)
    {
        f2 = 5 * abs(x2);
    }

    if (x2 >= -2 && x2 <= 2)
    {
        f2 = 9 * x2;
    }

    if (x2 > 2)
    {
        f2 = cos(x2);
    }

    cout << f2 << '\n';

    //c)
    int x3;
    double f3;
    cin >> x3;

    if (x3 < 0)
    {
        f3 = sin(x3) * sin(x3) - 3 * (cos(x3) * cos(x3));
    }

    if (x3 >= 0 && x3 <= 2)
    {
        f3 = (3 * x3 + 2) * (3 * x3 + 2);
    }

    if (x3 > 2)
    {
        f3 = x3*x3 - x3*x3*x3;
    }

    cout << f3 << '\n';

    //d)
    int x4;
    double f4;
    cin >> x4;

    if (x4 < -2)
    {
        f4 = abs(2 * x4 - 2);
    }

    if (x4 >= -2 && x3 <= 5)
    {
        f4 = sin(x4);
    }

    if (x4 > 5)
    {
        f4 = pow(x4, 8);
    }

    cout << f4 << '\n';

}

