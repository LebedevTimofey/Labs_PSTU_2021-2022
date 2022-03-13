#include <iostream>
using namespace std;

struct Node
{
	char data;
	Node* next;
	Node* pred;
};

Node* head;

void AddList(int f, int position)
{
	Node* node = new Node;
	cout << "\n>>";
	cin >> node->data;
	if (head == NULL)
	{
		node->next = node;
		node->pred = node;
		head = node;
	}
	else
	{
		Node* p = head;
		if (f == 1)
		{
			for (int i = position; i > 1; i--)
				p = p->next;
		}
		p->pred->next = node;
		node->pred = p->pred;
		node->next = p;
		p->pred = node;
	}
}

void PrintList()
{
	Node* a = head;
	cout << "\nЭлементы очереди: \n";
	do
	{
		cout << a->data << " ";
		a = a->next;
	} while (a != head);
}

int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Введите размер очереди: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		AddList(0, 0);
	}
	PrintList();
	int k = 0;
	cout << "На какое место поставить новый элемент?" << "\n";
	cin >> k;
	cout << endl;
	AddList(1, k);
	PrintList();
	return 0;
}