#include<iostream>
using namespace std;

class student
{
private:
	string FIO;
	string group;
	float mark;
public:
	string GetFIO()
	{
		return FIO;
	}
	void SetFIO(string valueFIO)
	{
		FIO = valueFIO;
	}
	string Getgroup()
	{
		return group;
	}
	void Setgroup(string valuegroup)
	{
		group = valuegroup;
	}
	float Getmark()
	{
		return mark;
	}
	void Setmark(float valuemark)
	{
		mark = valuemark;
	}
	student(string s, string c, float a)
	{
		FIO = s;
		group = c;
		mark = a;
		cout << "Конструктор с параметрами для объекта: " << this << endl;
	}
	student()
	{
		FIO = "";
		group = "";
		mark = 0;
		cout << "Конструктор без параметров для объекта: " << this << endl;
	}
	student(const student& h)
	{
		FIO = h.FIO;
		group = h.group;
		mark = h.mark;	
		cout << "Конструктор копирования для объекта: " << this << endl;
	}
	~student()
	{

	}
	void print()
	{
		cout << "FIO:" << FIO << endl;
		cout << "group:" << group << endl;
		cout << "mark:" << mark<<endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	student t1;
	t1.print();
	student t2("Voronin Zrumic Alendvikovich","second miska risa",210.15);
	t2.print();
	student t4;
	t4.SetFIO("Lebedeva jaaaaaaaaa");
	t4.Setgroup("Gruppa krovi");
	t4.Setmark(300);
	student t3(t4);
	t3.print();
	return 0;
}