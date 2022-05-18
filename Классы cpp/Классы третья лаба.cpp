#include<iostream>
using namespace std;

class Time
{
private:
	int minute;
	int seconds;
public:
	int Getminute()
	{
		return minute;
	}
	int Getseconds()
	{
		return seconds;
	}
	void Setminute(int valueminute)
	{
		minute = valueminute;
	}
	void Setseconds(int valueseconds)
	{
		seconds = valueseconds;
	}
	Time()
	{
		minute = 0;
		seconds = 0;
	}
	Time(int a, int b)
	{
		minute = a;
		seconds = b;
	}
	Time(const Time& p)
	{
		minute = p.minute;
		seconds = p.seconds;
	}
	~Time()
	{

	}
	friend istream& operator>>(istream& in, Time& p);
	friend ostream& operator<<(ostream& out, const Time& p);
	Time& operator = (const Time&);
	Time operator +(const Time&p1);
	bool operator==(const Time& p2);
};

istream& operator>>(istream& in, Time& p)
{
	cout << "minute:"; in >> p.minute;
	cout << "seconds:"; in >> p.seconds;
	return in;
}
ostream& operator<<(ostream& out, const Time& p)
{
	return (out << p.minute << ":" << p.seconds<<endl);
}

Time& Time::operator = (const Time& p)
{
	if (&p == this)
	{
		return *this;
	}
	minute = p.minute;
	seconds = p.seconds;
	return *this;
}
Time Time::operator +(const Time& p1)
{
	int temp1 = 60 * minute + seconds;
	int temp2 = 60 * p1.minute + p1.seconds;
	int sum = temp1 + temp2;
	Time p;
	p.minute = sum / 60;
	p.seconds = sum % 60;
	return p;
}
bool Time:: operator==(const Time& p2)
{
	int sum1 = minute * 60 + seconds;
	int sum2 = p2.minute * 60 + p2.seconds;
	if (sum1 == sum2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	Time p1;
	Time p2;
	Time p3;
	cin >> p1;
	cin >> p2;
	cout<<p1 + p2;
	if (p1 == p2)
	{
		cout << "Одинаковое время" << endl;
	}
	else
	{
		cout << "Разное время" << endl;
	}
	p3 = p2;
	cout <<"Новый элемент : "<< p2<<endl;
	//cout << p1;
	//cout << p2;
}