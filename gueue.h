
#ifndef QUEUE_H
#define QUEUE_H

class list
{
public:
	list();
	void input();
	void print();
private:	
	struct dates
	{
		int num;
		int S;
		char name[20];
		dates *back;
		dates *forward;
	};
	dates *current;
	dates *first;
};
#endif
