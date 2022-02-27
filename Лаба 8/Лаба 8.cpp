#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>
using namespace std;

struct film 
{
	string name;
	string producer;
	int release_year;
	int cost;
};


int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	ofstream file;
	file.open("Myfile.txt");
	if (file.is_open())
	{
	    
		film* mas = new film[8];
		film gm;
		gm.name = "Green mile";
		gm.producer = "Frank Darabot";
		gm.release_year = 1999;
		gm.cost = 60000000;
		mas[0] = gm;
		film efs;
		efs.name = "escape from Shoushenk";
		efs.producer = "Frank Darabot";
		efs.release_year = 1994;
		efs.cost = 25000000;
		mas[1] = efs;
		film lr;
		lr.name = "Lord of the ring";
		lr.producer = "Piter Djekson";
		lr.release_year = 2003;
		lr.cost = 94000000;
		mas[2] = lr;
		film sl;
		sl.name = "Shindlers list";
		sl.producer = "Steven Spilberg";
		sl.release_year = 1993;
		sl.cost = 22000000;
		mas[3] = sl;
		film fg;
		fg.name = "Forest Gump";
		fg.producer = "Robert Zemekis";
		fg.release_year = 1994;
		fg.cost = 55000000;
		mas[4] = fg;
		film pf;
		pf.name = "Pulp fiction";
		pf.producer = "Kventin Tarantino";
		pf.release_year = 1994;
		pf.cost = 8000000;
		mas[5] = pf;
		film i;
		i.name = "interstellar";
		i.producer = "Kristopher Nollan";
		i.release_year = 2014;
		i.cost = 16;
		mas[6] = i;
		film in;
		in.name = "inseption";
		in.producer = "Kristopher Nollan";
		in.release_year = 2010;
		in.cost = 2;
		mas[7] = in;
		for (int i = 0; i < 8; i++)
		{
			file << "Name - " << mas[i].name << endl;
			file << "Producer-" << mas[i].producer << endl;
			file << "Release year-" << mas[i].release_year << endl;
			file << "cost-" << mas[i].cost << "$" << endl;
			file << "__________________________";
			file << endl;
		}
		file.close();
		file.open("Myfile.txt");
		cout << "Введите бюджет, который  удовлетворяет условию записи в файл";
		cin >> n;
		for (int i = 0; i < 8; i++)
		{
			if (mas[i].cost <= n)
			{
				file << "Name - " << mas[i].name << endl;
				file << "Producer-" << mas[i].producer << endl;
				file << "Release year-" << mas[i].release_year << endl;
				file << "cost-" << mas[i].cost << "$" << endl;
				file << "__________________________";
				file << endl;
			}
		}
		file.close();
		file.open("Myfile.txt");
		film nf;
		SetConsoleCP(1251);
		cin.ignore(32767, '\n');
		cout << "Введите данные фильма(1-Название, 2-Продюссер, 3-год выхода, 4-стоимость фильма)";
		getline(cin, nf.name);
		getline(cin, nf.producer);
		cin >> nf.release_year;
		cin >> nf.cost;
		file <<"name-"<< nf.name << endl;
		file <<"producer-"<< nf.producer << endl;
		file <<"Release year-"<< nf.release_year << endl;
		file <<"Cost" nf.cost << '\n';
		for (int i = 0; i < 8; i++)
		{
			if (mas[i].cost <= n)
			{
				file << "Name - " << mas[i].name << endl;
				file << "Producer-" << mas[i].producer << endl;
				file << "Release year-" << mas[i].release_year << endl;
				file << "cost-" << mas[i].cost << "$" << endl;
				file << "__________________________";
				file << endl;
			}
		}
		delete[]mas;
		file.close();
	}
	else
	{
		cout << "Ошибка открытия файла";
	}
	return 0;
}