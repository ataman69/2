
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
		cout << "� ��� ���� ����� �� 2 � ����� ����������\n 1. �������� ����������� \n 2. ����� �����������\n 3. ����� �� �������\n ";
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


