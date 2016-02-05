
#include "gueue.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 0;
	list ld;
	for(;;)
	{
		cout << "У вас есть выбор из 2 и более кондидатов\n 1. Создание государства \n 2. Вывод государство\n 3. Выход из матрицы\n ";
		cin >> i;
		switch (i)
		{
		case 1: ld.input();
		case 2: ld.print();
		case 3: return 0;
		default: break;
		}
	}
	return 0;
}


