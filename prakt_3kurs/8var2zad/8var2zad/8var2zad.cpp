// 8var2zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Function.h"
#include "Hyberbola.h"
#include "Ellipse.h"
using namespace std;
int main()
{

	setlocale(0, "");

	Function *ptr;
	float x, a, b;

	while (true)
	{
		cout << "Введите x: ";
		cin >> x;
		if (cin.peek() == '\n') {
			cin.get();
			break;
		}
		else {
			cout << "Повторите ввод(ожидается число):" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
	cout << endl;

	while (true)
	{
		cout << "Введите a: ";
		cin >> a;
		if ((cin.peek() == '\n')&&(a>=0)) {
			cin.get();
			break;
		}
		else {
			cout << "Повторите ввод(ожидается число):" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
	cout << endl;

	while (true)
	{
		cout << "Введите b: ";
		cin >> b;
		if (cin.peek() == '\n') {
			cin.get();
			break;
		}
		else {
			cout << "Повторите ввод(ожидается число):" << endl;
			cin.clear();
			while (cin.get() != '\n') {}
		}
	}
	cout << endl;



	if (x < a) {
		Ellipse e(x, a, b);
		ptr = &e;
		ptr->func();
	}
	else {
		if (x>a) {
			Hyber h(x, a, b);
			ptr = &h;
			ptr->func();
		}
	}
	if (x == a) {
		Ellipse e(x, a, b);
		ptr = &e;
		ptr->func();

		Hyber h(x, a, b);
		ptr = &h;
		ptr->func();
	}
}
