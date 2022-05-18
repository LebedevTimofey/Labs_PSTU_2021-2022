#include<iostream>
using namespace std;

class PAIR
{
protected:
	int first;
	int second;
public:
	void set_first(int value)
	{
		first = value;
	}
	void set_second(int value)
	{
		second = value;
	}
	int get_first()
	{
		return first;
	}
	int get_second()
	{
		return second;
	}
	PAIR()
	{
		first = 0;
		second = 0;
	}
	PAIR(int value, int value1)
	{
		first = value;
		second = value1;
	}
	PAIR(const PAIR& a)
	{
		first = a.first;
		second = a.second;
	}
	~PAIR()
	{

	}
	PAIR& operator=(const PAIR&);
	friend istream& operator>>(istream& in, PAIR& p);
	friend ostream& operator<<(ostream& out, const PAIR& p);
	bool operator>(const PAIR&);
	bool operator<(const PAIR&);
	bool operator==(const PAIR&);
	bool operator!=(const PAIR&);
};
bool PAIR::operator>(const PAIR& p)
{
	if (first > p.first || first == p.first && second > p.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool PAIR::operator<(const PAIR& p)
{
	if (first < p.first || first == p.first && second < p.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool PAIR::operator==(const PAIR& p)
{
	if ( first == p.first && second == p.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool PAIR::operator!=(const PAIR& p)
{
	if (first != p.first ||first==p.first&&second!=p.second)
	{
		return true;
	}
	else
	{
		return false;
	}
}
PAIR& PAIR::operator=(const PAIR& a)
{
	first = a.first;
	second = a.second;
	return *this;
}
istream& operator>>(istream& in, PAIR& p)
{
	cout << "первое число :"; in >> p.first;
	cout << "второе число:"; in >> p.second;
	return in;
}
ostream& operator<<(ostream& out, const PAIR& p)
{
	return (out << p.first << " " << p.second << endl);
}
class FRACTION :public PAIR
{
public:
	void set_integer_part(int value)
	{
		first = value;
	}
	void set_fraction_part(float value)
	{
		second = value;
	}
	int get_integer_part()
	{
		return first;
	}
	float get_fractional_part()
	{
		return second;
	}
	FRACTION()
	{
		first = 0;
		second = 0;
	}
	FRACTION(int a, float b)
	{
		first = a;
		second = b;
	}
	FRACTION(const FRACTION& a)
	{
		first = a.first;
		second = a.second;
	}
	~FRACTION()
	{

	}
	friend istream& operator>>(istream& in, FRACTION& p);
	friend ostream& operator<<(ostream& out, const FRACTION& p);
};
istream& operator>>(istream& in, FRACTION& p)
{
	cout << "целая часть :"; in >> p.first;
	cout << "дробная часть:"; in >> p.second;
	return in;
}
ostream& operator<<(ostream& out, const FRACTION& p)
{
	return (out << p.first << "," << p.second << endl);
}
int main()
{
	setlocale(LC_ALL, "ru");
	PAIR f1;
	cin >> f1;
	cout << f1;
	PAIR f2(17, 19);
	cout << f2;
	f1 = f2;
	cout << "ваше первое число теперь:" << f1;
	FRACTION f3,f4;
	cout << "введите две десятичные дроби"<<endl;
	cin >> f3;
	cin >> f4;
	if (f3 > f4)
	{
		cout << "первое число " << f3 << " больше второго числа" << f4<<endl;
	}
	if (f3 < f4)
	{
		cout<< "первое число " << f3 << " меньше второго числа" << f4 << endl;
	}
	if (f3 == f4)
	{
		cout << "Эти два числа равны";
	}
	return 0;
}