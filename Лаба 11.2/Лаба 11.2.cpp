#include <iostream>
using namespace std;

struct Node//структура с названием Node
{
	char data;//информационное поле типа char
	Node* next;//указатель на следующий элемент
	Node* pred;//указатель на предидущий элемент
};

Node* head;

void AddList(int f, int position)//функция для создания двунаправленного списка
{
	Node* node = new Node;//выделяем память для нового элемента списка
	cout << "\n>>";
	cin >> node->data;//просим ввести данные
	if (head == NULL)//проверяем первый ли элемент списка
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

void PrintList()//функция для вывода списка
{
	Node* a = head;
	cout << "\nЭлементы списка: \n";
	do
	{
		cout << a->data << " ";
		a = a->next;
	} while (a != head);
}

int main()
{
	setlocale(LC_ALL, "rus");//подключаем русскую раскладку
	int n;
	cout << "Введите размер списка: ";//просим ввести размер списка
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		AddList(0, 0);
	}
	PrintList();
	int k = 0;
	cout << "На какое место поставить новый элемент?" << "\n";
	cin >> k;//вводим номер нового элемента
	cout << endl;
	AddList(1, k);//добавляем элемент
	PrintList();//выводим список
	return 0;
}