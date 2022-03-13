#include<iostream>
using namespace std;

/*void bye(int* mas[], int n, int i)
{
	for (int j=i;j<n-1;j++)
	{
		mas[j] = mas[j + 1];
	}
}*/

int main()
{
	int k = 0;
	int n,key;
	setlocale(LC_ALL, "ru");
	cout << "Введите количество элементов массива";
	cin >> n;
	cout << "Введите искомую цифру";
	cin >> key;
	int* mas = new int[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 10+1;
		cout << mas[i] << "\n";
	}
	cout << "____________________"<<"\n";
	for (int i = 0; i < n; i++)
	{
		if (mas[i] == key)
		{
			k += 1;
			//bye(&mas, n, i);
			for (int j = i; j < n ; j++)
			{
				mas[j] = mas[j + 1];
			}
		}
	}
	for (int i = 0; i < n - k; i++)
	{
		cout << mas[i] << "\n";
	}
	delete mas;
}