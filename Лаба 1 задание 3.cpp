/*
Студент начал решать задачи, когда электронные часы показывали h1 часов и min1 минут, 
а закончил, когда было h2 часов и min2 минут. 
Составьте программу, позволяющую определить, сколько времени 
(в часах и минутах) студент решал эти задачи.
*/

// Допустим, чел умный и по ночам дз не делает 
#include <iostream>

using namespace std;

int main()
{
    int h1, min1, h2, min2;
    int h3, min3;
    int time1, time2, tm;
    cout << "Введите время начала через пробел\n";

    cin >> h1 >> min1;
    cout << "Введите время окончания через пробел\n";
    cin >> h2 >> min2;
  
    time1 = h1*60 + min1;
    time2 = h2*60 + min2;
    tm = time2 - time1;

    h3 = tm / 60;
    min3 = tm - h3*60;
    cout << h3 << ' ';
    cout << min3; 
}

