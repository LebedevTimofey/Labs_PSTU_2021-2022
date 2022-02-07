#include<iostream>
#include<sstream>
int f;
using namespace std;
float srznach(int arr[10])
{
	float n = 10;
	float s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s / n;
}





string srznach(string s)
{
	string a;
	int k = 0;
	char G[26] = { 'a','b','c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'v', 'u', 'w', 'x', 'y', 'z', };
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == G[j])
			{
				k = k + 1;
			}
		}
	}
	while (k > 0)
	{
		a += ('0' + k % 10);
		k /= 10;
	}
	return a;
}





int main()
{
	string s;
	setlocale(LC_ALL, "ru");
	int arr[10];
	cout << "Введите массив чисел" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout <<"Среднее арифметическое="<< srznach(arr) << endl;;
	cout << "Введите строку";
	cin >> s;
	cout << "Введите количество символов";
	cin >> f;
	cout << srznach(s);
}