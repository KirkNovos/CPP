#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;

struct drobi
{
private:
public:
	int a=0, b=0, c=0, e=0, x=0,r=0,r1=0;
	int add1, add2;
	double eq1, eq2;


	void read()
	{
		//cout << "Введите числитель а: ";
		//cin >> a;

		while (true)
		{
			cout << "Введите числитель а: ";
			cin >> a;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "Ошибка!Повторите ввод:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

		//cout << "Введите знаменатель b: ";
		//cin >> b;

		while (true)
		{
			cout << "Введите знаменатель b: ";
			cin >> b;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "Ошибка!Повторите ввод:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

		//cout << "Введите числитель c: ";
		//cin >> c;

		while (true)
		{
			cout << "Введите числитель c: ";
			cin >> c;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "Ошибка!Повторите ввод:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

		//cout << "Введите знаменатель e: ";
		//cin >> e;

		while (true)
		{
			cout << "Введите знаменатель e: ";
			cin >> e;
			if (cin.peek() == '\n') {
				cin.get();
				break;
			}
			else {
				cout << "Ошибка!Повторите ввод:" << endl;
				cin.clear();
				while (cin.get() != '\n') {}
			}
		}

	}
	void add()
	{
		add1 = a * e + c * b;
		add2 = b * e;
		reduce(add1, add2);
	};
	void sub() {
		add1 = a * e - c * b;
		add2 = b * e;
		reduce(add1, add2);
	};

	void mul() {
		add1 = a * c;
		add2 = b * e;
		reduce(add1, add2);
	};

	void div() {
		add1 = a * e;
		add1 = b * c;
		reduce(add1, add2);
	};




	void equal() {
		eq1 = (double)a / b;
		eq2 = (double)c / e;

		cout << eq1 << endl;
		cout << eq2 << endl;
		if (eq1 > eq2) {
			cout << "первое число бодьше второго" << endl;
		}
		else if (eq1 < eq2) {
			cout << "первое число меньше второго" << endl;
		}
		else if (eq1 == eq2) {
			cout << "оба числа равны" << endl;
		}
	};








	void reduce(int kek, int kek1) {
		if (kek > kek1)
		{
			for (x = 0; kek >= kek1; x++)
			{
				kek = kek - kek1;
			}
			for (int i = kek; i > 0; i--) {
				r = kek % i;
				r1 = kek1 % i;
				if (r == 0 && r1 == 0) {
					kek = kek / i;
					kek1 = kek1 / i;
				}
			}
			display(kek, kek1, x);
		}
		else
		{
			for (int i = kek; i > 0; i--) {
				r = kek % i;
				r1 = kek1 % i;
				if (r == 0 && r1 == 0) {
					kek = kek / i;
					kek1 = kek1 / i;
				}
			}
			display(kek, kek1, x);
		}
	}

	void display(int lul, int lul1, int y) {
		if (y != 0) {
			if (lul == 0) {
				cout << y<<endl;
			}
			else{
				cout << "                  " << lul << endl;
				cout << "        " << y << " ___" << endl;
				cout << "                  " << lul1 << endl;
			}
		}
		else {
			cout << "                  " << lul<<endl;
			cout << "                ___"<<endl;
			cout << "                  " << lul1<<endl;
		}

	}
};

int main()
{
	setlocale(LC_ALL, "RUS"); 
	drobi z;
	int key=1;
	do {
		cout << "1.Ввод/Изменение" << endl;
		cout << "2.Сумма" << endl;
		cout << "3.Вычисление" << endl;
		cout << "4.Умножение" << endl;
		cout << "5.Деление" << endl;
		cout << "6.Сравнение" << endl;
		cout << "0.Выход" << endl;
		cin >> key;
		switch (key) {
		case 1:
			z.read();
			break;
		case 2:
			z.add();
			break;
		case 3:
			z.sub();
			break;
		case 4:
			z.mul();
			break;
		case 5:
			z.div();
			break;
		case 6:
			z.equal();
			break;
		}
	} while (key != 0);
	return 0;
	//int k, n;
	//cin >> "Введите числитель" >> k;
	//cin >> "Введите знаменатель" >> n;

}
