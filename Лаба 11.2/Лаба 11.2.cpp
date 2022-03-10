#include<iostream>
using namespace std;

struct point
{
	char data;
	point* next;//указатель на следующий элемент
	point* pred;//указатель на предыдущий элемент
};
point* make_point()
//создание одного элемента
{
	point* p = new(point);
	p->next = 0;
	p->pred = 0;//обнуляем указатели
	char s;
	cout << "\nEnter string:";
	cin >> p->data;

	return p;
}
point* make_list(int n)
//создание списка
{
	point* p, * beg;
	beg = make_point();//создаем первый элемент
	for (int i = 1; i < n; i++)
	{
		p = make_point();//создаем один элемент
		//добавление элемента в начало списка
		p->next = beg;//связываем р с первым элементом
		beg->pred = p;//связываем первый элемент с p
		beg = p;// p становится первым элементом списка
	}
	return beg;
}
void cout_list(point* beg)
{
	point* p = beg;
	while (p != 0)
	{
		cout << p->data<<"\n";
		p = p->next;
	}
}
point* add_element(point* beg, int n)
{
	int k;
	int count = 1;
	char s;
	point* p;
	cout << "Введите новую букву"<<"\t";
	cin >> s;
	cout << "Введите номер под которым будет стоять новая буква";
	cin >> k;
	point* r = new(point);
	r->data = s;
	r->next = 0;
	r->pred = 0;
	for (int i = 0; i < n + 1; i++)
	{
		if (k == count)
		{
			r->next = beg;//связываем р с первым элементом
			beg->pred = r;//связываем первый элемент с p
			beg = r;// p становится первым элементом списка
		}
		else
		{
			p->next = beg;//связываем р с первым элементом
			beg->pred = p;//связываем первый элемент с p
			beg = p;// p становится первым элементом списка
		}
		count+=1;
	}
	return beg;
}

int main()
{
	point* p;
	int k;
	int n;
	cout << "enter the count letters";
	cin >> n;
	setlocale(LC_ALL, "ru");
	point* beg = make_list(n);
	add_element(beg, n);
	cout_list(beg);
}