
#include "gueue.h"
#include <iostream>

using namespace std;

list::list()
{
	current = NULL;
	first = NULL;
}

void list::input()
{
	dates *nows = new dates;
	if (current == NULL)first = nows;
	try {
		cout << "������� ��� �� ����������: ";cin >> nows->num;
		cout << "������� �������: ";cin >> nows->S;
		cout << "������� ��������: ";cin >> nows->name;
	}
	catch(...)
	{
		cout << "�� ����� �� �� ������ ";
		input();
	}
	nows->back = current;
	nows->forward = NULL;
	if (current != NULL)current->forward = nows;
	current = nows;
}

void list::print()
{
	dates *tmp = first;
	while (tmp != NULL)
	{
		cout << "����������: " << tmp->num;
		cout << "\t�������: " << tmp->S << endl;
		cout << "\t��������: " << tmp->name << endl;
		tmp = tmp->forward;
	}
}
