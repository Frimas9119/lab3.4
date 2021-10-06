// Lab_03_4.cpp
// < Тимчук Остап >
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 8
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double r; //promihne
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;
	// розгалуження в повній формі
	if ((y <= sqrt(pow(r,2)-pow(x,2)) && x >= 0) ||
		(y >= abs(x) && y <= -r && y <= r))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}