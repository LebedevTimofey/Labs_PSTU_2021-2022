#include<iostream>
#include<string>
using namespace std;


void kol(string s, int size)
{
	
	string* arr = new string[size];
	int j=0;
	string word="";
	for (int i = 0; i < size; i++)
	{
		
		if (s[i] != ' ')
		{
			word += s[i];
		}
		else
		{
			arr[j] = word;
			j += 1;
			word = "";
		}
	}
	int words = j;

	for (int i = 0; i < words-2 ; i++)
	{
		int k1 = 0;
		for (int j = i+1; j < words-1 ; j++)
		{
			if (arr[i] == arr[j])
			{
				k1 += 1;
			}
		}
		if (k1 == 0)
		{
			cout << arr[i]<<endl;
		}
	}
	int k2 = 0;
	for (int i = 0; i < words - 2; i++)
	{
		if (arr[words-1] == arr[i])
		{
			k2 += 1;
		}
	}
	if (k2 == 0)
	{
		cout << arr[words - 1];
	}
	
	delete[] arr;
}


int main()
{
	int k = 0;
	setlocale(LC_ALL, "ru");
	string s;
	cout << "Введите строку"<<endl;
	getline(cin,s);
	int size = s.length();
	kol(s, size);
}