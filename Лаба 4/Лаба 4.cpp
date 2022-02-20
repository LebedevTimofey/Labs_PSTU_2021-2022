#include<iostream>
using namespace std;

void left(int*arr, int k)
{
	int n = k-1;
	for (int i = k-1; i >=0; i--)
	{
		cout << arr[i]<<" ";
	}
	for (int i = 9; i != n; i--)
	{
		cout << arr[i]<<" ";
	}
}

void right(int* mas, int k)
{
	int n = k - 1;
	for (int i = k - 1; i <= 11; i++)
	{
		cout << mas[i]<<" ";
	}
	for (int i = 0; i != n; i++)
	{
		cout << mas[i] << " ";
	}
}

int main()
{
	int arr[10];
	int mas[12];
	int n = 10;
	int k;
	setlocale(LC_ALL, "ru");
	cout << "Введите массив"<<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Введите номер элемента с которого вывести массив";
	cin >> k;
	left(arr, k);
	cout << endl;
	int j = 0;
	cout << "Введите первый и последний элемент нового массива"<<endl;
	cin >> mas[0];
	cin >> mas[11];
	for (int i = 1; i < 11; i++)
	{
		mas[i] = arr[j];
		j += 1;
	}
	right(mas, k);
}