// Лаба 1 Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	//1)
	int a, b, c;
	cout << "Enter length of ribs\n";
	// принимаем за данность, что пользователь не дебил и вводит сначала боковые стороны
	// выяснять у него какие из них боковые сейчас влом
	cin >> a >> b >> c;
	int V, S;
	V = a * b * c;
	S = a * b;
	cout << "volume = " << V << "\nsquare = " << S << "\n";

	//2)
	double s;
	cout << "Enter s\n";
	cin >> s;
	double l;
	l = 2 * sqrt(M_PI * s);
	cout << l << "\n";
	
	//3)
	double x, y, z, p;
	cout << "Enter length\n";
	cin >> x >> y >> z;
	p = (x + y + z) / 2;
	double square;
	square = sqrt(p * (p - x) * (p - y) * (p - z));
	cout << square << "\n";
	
	//4)
	// тут требуются дополнительные данные
	double n, m;
	double P; 
	double sq;
	double alf;
	
	cout << "Enter length and angle\n"
	cin >> n >> m >> alf;

	P = (a + b) * 2;
	sq = a * b * sin(alf);

	cout << p << ' ' << sq;

	return 0;
}
