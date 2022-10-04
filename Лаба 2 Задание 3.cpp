#include <iostream>

using namespace std;

int main()
{ 
    // a)
    int n;
    cin >> n;
    switch (n)
    {
    case 1: 
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tueday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thusday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Sarurday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default: cout << "Illegal day\n";
    }

    //b)

    int m;
    cin >> m;
    switch (m)
    {
    case 1:
        cout << "winter\n";
        break;
    case 2:
        cout << "winter\n";
        break;
    case 3:
        cout << "spring\n";
        break;
    case 4:
        cout << "spring\n";
        break;
    case 5:
        cout << "spring\n";
        break;
    case 6:
        cout << "summer\n";
        break;
    case 7:
        cout << "summer\n";
        break;
    case 8:
        cout << "summer\n";
        break;
    case 9:
        cout << "autumn\n";
        break;
    case 10:
        cout << "autumn\n";
        break;
    case 11:
        cout << "autumn\n";
        break;
    case 12:
        cout << "winter\n";
        break;
    default: cout << "Illegal mounth\n";
    }

    // c)
    int l;
    cin >> l;
    switch (l)
    {
    case 1:
        cout << "31\n";
        break;
    case 2:
        cout << "28-29\n";
        break;
    case 3:
        cout << "31\n";
        break;
    case 4:
        cout << "30\n";
        break;
    case 5:
        cout << "31\n";
        break;
    case 6:
        cout << "30\n";
        break;
    case 7:
        cout << "31\n";
        break;
    case 8:
        cout << "31\n";
        break;
    case 9:
        cout << "30\n";
        break;
    case 10:
        cout << "31\n";
        break;
    case 11:
        cout << "30\n";
        break;
    case 12:
        cout << "31\n";
        break;
    default: cout << "Illegal mounth\n";
    }
    
    //d)
    int d;
    int M;
    cin >> d >> M;
    float a;
    switch (d)
    {
    case 1: //kg
        cout << M << "\n";
        break;
    case 2: //mg
        a = M / static_cast<float>(1000000); // иначе дробная часть теряется
        cout << a << "\n";
        break;
    case 3: //g
        a = M / static_cast<float>(1000);
        cout << a << "\n";
        break;
    case 4: //tonna
        a = M * 1000;
        cout << M * 1000 << "\n";
        break;
    default: cout << "Illegal mera\n";
    }

}
