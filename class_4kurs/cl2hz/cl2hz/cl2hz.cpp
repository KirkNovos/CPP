// cl2hz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Class.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	triangle t1;

	char key;
	do {
		cout << "1.Ввод/Изменение" << endl;
		cout << "2.Площадь" << endl;
		cout << "3.Периметр" << endl;
		cout << "4.Высоты" << endl;
		cout << "5.Вид треугольника" << endl;
		cout << "6.Выход" << endl;
		cin >> key;
		switch (key) {
		case '1':
			t1.ReadT();
			break;
		case '2':
			cout << "Площадь:" << t1.Square() << endl;
			break;
		case '3':
			cout << "Периметр:" << t1.Perimeter() << endl;
			break;
		case '4':
			t1.Hight();
			break;
		case '5':
			t1.Type();
			break;
		case '6':
			break;
		default:
			cout << "Такого пункта нет!!!!" << endl;
		}
	} while (key != '6');
	return 0;
}