#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* create_list(int n)
{
	Node* first;
	Node* p, * r;
	first = new(Node);
	cout << endl;
	cin >> first->data;
	first->next = 0;//хз чё делаем
	p = first;
	for (int i = 0; i < n - 1; i++)
	{
		r = new(Node);//выделяем память под новый элемент списка
		cout << endl;
		cin >> r->data;//считываем информацию о новом элементе
		r->next = 0;//хз чё делаем
		p->next = r;
		p = r;
	}
	return first;
}
void print_list(Node* first)
{
	Node* p = first;
	while (p != 0)
	{
		cout << p->data << "\t";
		p = p->next;
	}
}
Node* delete_element(Node* first, int n)
{
	Node* p = first;
	int count = 0;

	while (p->next != 0)
	{
		p = p->next;
		count++;
		if (p->data % 2 == 0)
		{
			p = p->next;
			Node* p = first;
			for (int i = 1;  p->next != 0; i++)
			{
				p = p->next;
			}
			Node* r = p->next;//ставим указатель r на k-й элемент
			p->next = r->next;//связываем k-1 и k+1 элемент
			delete r;//удаляем k-й элемент из памяти
		}
	}
	return first;
}

int main()
{
	int n;
	setlocale(LC_ALL, "ru");
	cout << "Введите количество эелементов";
	cin >> n;
	Node* first = create_list(n);
	delete_element(first,n);
	print_list(first);
}