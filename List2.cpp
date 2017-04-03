// List2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "locale.h"
#include <iostream>

using namespace std;

struct Test
{
	int n;
};

struct List
{
	Test test;
	List *next;
};

void AddList(List *&First, List *Current)
{
	Current->next = First;
	First = Current;
}

void main()
{
	int n;
	List *First = 0;
	List *Current;
	setlocale(LC_ALL, "rus");
	cout << "������� ���������� ������: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Current = new List;
		Current->test.n = i + 1;
		AddList(First, Current);
	}
	for (List *pi = First; pi; pi = pi->next)
		cout << pi->test.n << "-� ������" << endl;
	system("pause");
}

