#include <iostream>
using namespace std;

struct fraction
{
	double first;
	double second;
	void Init(double, double);
	void Show();
	void Read();
	double Root();
};

void fraction::Init(double F, double S)
{
	first = F;
	second = S;
}

void fraction::Show()
{
	cout << "A = " << first << '\n';
	cout << "B = " << second << '\n';;
}

void fraction::Read()
{
	cout << "Уравнение: y=Ax+B\n" << "Коэффицент A: ";
	cin >> first;
	cout << "Коэффицент B: ";
	cin >> second;
}

double fraction::Root()
{
	while (first == 0)
	{
		cout << "Введён 0. Введите A повторно: ";
		cin >> first;
	}
	return (second * (-1)) / first;
}

int main()
{
	setlocale(LC_ALL, "rus");
	fraction A;
	A.Read();
	A.Show();
	cout << "x = " << A.Root() << "";
	return 0;
}