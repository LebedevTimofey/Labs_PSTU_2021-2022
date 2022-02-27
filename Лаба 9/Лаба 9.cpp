#include<iostream>
#include<fstream>
#include<string>
using namespace std;




int main()
{
	setlocale(LC_ALL, "ru");
	int k = 1;//объявляем переменную счётчик типа int
	int kolprobelov = 0;//переменная для подсчёта проблема
	int k1, k2;//переменные в которые будут записаны промежутки
	string s;//переменная типа string, в которую мы запишем последнюю строку
	cout << "Введите номер строки с которой начать проверку и номер строки до которой проверять"<<endl;
	cin >> k1;//запрашиваем промежутки
	cin >> k2;
	char letter;//
	string line;
	ifstream Myfile1;//объявляем переменную класса ifstream
	fstream Myfile2;//объявляем переменную класса fstream
	Myfile2.open("Myfile2.txt", fstream::out | fstream::in);//открываем файл для чтения
	Myfile1.open("Myfile1.txt");//открываем файл для записи
	cin.ignore(32767, '\n');
	if (Myfile1.is_open()|| Myfile2.is_open())//проверяем, открылся ли файл
	{
		cout << "Файлы открыт!"<<endl;
		while (getline(Myfile1,line))//построчно читаем файл
		{
			letter = line[0];
			if ((k > k1 && k < k2)||(k>k2&&k<(k2+3)))//если строка входит в заданный промежуток, то выполняем следующие действия
			{
				if (toupper(letter) == 'a' || tolower(letter) == 'a')
				{
					s = line;//присваем переменной строку
					Myfile2 << line << endl;//записываем во второй файл строку
				}
			}
			k += 1;
		}
	}
	else
	{
		cout << "Ошибка считывания файла";
	}
	Myfile2.close();//закрываем файлы
	Myfile1.close();
	for (int i = 0; i < s.length(); i++)//считаем количество пробелов в последней стркое
	{
		if (s[i] == ' ')
		{
			kolprobelov += 1;
		}
	}
	cout << "Количество слов-" << kolprobelov +1;//выводим количество слов в последней строке
	return 0;
}