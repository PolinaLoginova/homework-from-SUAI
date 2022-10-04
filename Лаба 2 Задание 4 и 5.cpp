#include <iostream>

using namespace std;

int main()
{
    // задание 4
    setlocale(LC_ALL, "");
    int a, b, c, x, y;
    cout << "Введите a, b, c, x, y\n";
    cin >> a >> b >> c >> x >> y;
    if (x >= a || x >= b || x >= c && y >= a || y >= b || y >= c)
        cout << "пройдет\n";
    else
        cout << "не пройдет\n";

    // задание 5
    // Сможет ли шар радиуса R пройти в ромбообразное отверстие со стороной P и острым углом Q? 

    double R, Q, P;
    cout << "Введите R, P, Q\n";
    cin >> R >> P >> Q;
    double r;
    r = P * sin(Q) / 2; // крит радиус
    if (R <= r)
        cout << "пройдет\n";

    else
        cout << "не пройдет\n";


}