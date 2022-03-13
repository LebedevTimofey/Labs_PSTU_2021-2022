#include<iostream>
#include<stack>
using namespace std;

int main()
{

	int n,el;
	setlocale(LC_ALL, "ru");
	stack<int>steck1;
	cout << "Введите размер стека"<<"\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << ">>";
		cin >> el;
		if (el % 2 != 0)
		{
            steck1.push(el);
		}
	}
	cout << "_____________________" << endl;
	while (!steck1.empty())
	{
		cout << ">>" << steck1.top() << "\n";
		steck1.pop();
	}
}
