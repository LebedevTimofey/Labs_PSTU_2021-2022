#include < iostream >
using namespace std;

class Money
{
private:
	int rub; //рубль
	int kop; //копейка

public:
	Money()
	{
		rub = 0;
		kop = 0;
	}

	void Moneyhow(int r, int k)
	{
		rub = r;
		kop = k;
	}

	void howmuch()
	{
		cout << ("У вас ") << rub << (" рублей ") << kop << (" копеек");
	}

};

class many
{
	int* array; //множество int в виде массива
	int size; //его размер
public:
	many() //конструктор по умолчанию
	{
		array = new int[1];
		array[0] = 0;
		size = 1;
	}
	many(int siz) //конструктор по размеру
	{
		array = new int [siz] {};
		size = siz;
	}
	int& operator [] (int i) //перегрузка индексации обращается напрямую к массиву внутри
	{
		return array[i];
	}
	int operator () () //метод () возвращает размер
	{
		return size;
	}
	void operator ++ (int i) //инкремент добавляет один нулевой элемент в конец массива
	{
		size++;
		int* new_array = new int[size];
		for (int a = 0; a < size - 1; a++) new_array[a] = array[a];
		new_array[size - 1] = 0;
		delete[]array;
		array = new_array;
	}
	many operator + (many& other) //обьеденение
	{
		many newmany(this->size + other.size); //создание нового элемента для его возврата
		for (int i = 0; i < this->size; i++) //перезапись значиний в его массив
			newmany.array[i] = this->array[i];
		for (int i = 0; i < other.size; i++)
			newmany.array[size + i] = other.array[i];
		return newmany; //возврат элемента, являющегося суммой двух

	}
	~many()
	{
		if (!array) delete[]array; //чистит массив
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int r = 0;
	int k = 0;
	many arc; // пример работы наших функций
	arc++;
	arc[0] = 1;
	arc[1] = 23;
	many marc(2);
	marc[0] = 4;
	marc[1] = 5;
	many marcs = arc + marc;
	for (int i = 0; i < marcs(); i++)
		cout << marcs[i] << " ";
	cout << endl << "Введите количество рублей: ";
	cin >> r;
	cout << "Введите количество копеек: ";
	cin >> k;
	Money obj;
	obj.Moneyhow(r, k);
	obj.howmuch();
	return (0);
}
