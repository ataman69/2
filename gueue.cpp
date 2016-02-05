
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
		cout << "Введите кол во крепостных: ";cin >> nows->num;
		cout << "Введите площадь: ";cin >> nows->S;
		cout << "Введите название: ";cin >> nows->name;
	}
	catch(...)
	{
		cout << "Вы ввели не те данные ";
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
		cout << "Крепостных: " << tmp->num;
		cout << "\tПлощадь: " << tmp->S << endl;
		cout << "\tНазвание: " << tmp->name << endl;
		tmp = tmp->forward;
	}
}
