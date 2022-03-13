#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<char>q;
	int n,k,count;
	count = 0;
	setlocale(LC_ALL, "ru");
	char el,extra;
	cout << "Введите размер очереди:";
	cin >> n;
	cout << endl;
	cout << "Введите новый элемент :";
	cin >> extra;
	cout << "Введите его номер:";
	cin >> k;
	for (int i = 0; i <= n; i++)
	{
		cout << ">>";
		count += 1;
		cin >> el;
		if (k == count)
		{
			q.push(extra);
			q.push(el);
		}
		else
		{
			q.push(el);
		}
	}
	cout << "________________" << endl;
	while (!q.empty())
	{
		cout <<">>"<< q.front() << endl;
		q.pop();
	}
}