// Персональный шаблон проекта С++
#include <iostream>
using namespace std;

#define PI 3.14
#define STR "Hello world!"
#define F false

// создание бесконечного цикла for
#define forever for (int i = 0; ; i++)\
					cout << i << endl
#define MSG "Hello world!\n"\
			"Bye world!\n"
#define begin {
#define end }
#define equals =
#define ifequals ==
#define commendend ;
#define sum(a, b) (a + b) // создание макроса
#define loop(a) for (int i = 0; i < a; i++)


#define _NUM 10

#ifndef NUM // if not define
//#ifdef NUM // if define
int globalN = 10;
#else
#error "Num не должно сущестсвовать!"
int globalM = 15
#endif

#if NUM != 10 // if принимает только целочисленное значение
void func(int n) {
	cout << n << endl;
}
#elif NUM > 5
string func(int n) {
	cout << "N";
}
#else
int func(int n) {
	return n;
}
#endif




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Константы препроцессора
	/*cout << "Pi = " << PI << endl;
	n = 10 * PI;
	cout << n << endl;
	cout << STR << endl;
	string hi = STR;*/

	// Создание программных конструкций
	/*forever{
		cout << "Введите число " << i + 1 << ": ";
		cin >> n;
		if (n == 0)
			break;
	}*/

	// Использование undef
	/*cout << "pi = " << PI << endl;

#undef PI // удаляет переменную PI
#define PI 3.5 // создаем новую переменную PI

	cout << "pi = " << PI << endl;*/

	// Создание макроса
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;*/

	loop(5) cout << "#";


	return 0;
}