#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int HASHTAB_SIZE{ 100 };
int colisions;

struct Node 
{
    string fio;
    string passport;
    string phone;
    struct Node* next;
};

struct Node* FIOtab[100];

string getFio()
{
    vector<string> surnames = { "Иванов","Петров","Сидоров","Тесла","Маск","Эйнштейн","Ньютон","Гук","Кюри","Сталин","Ленин","Маркс" };
    vector<string> names = {
    "Иван","Петр","Сидор","Никола","Илон","Альберт","Исаак","Роберт","Мария","Иосиф","Владимир","Карл",
    "Алексей","Михаил","Дмитрий"
    };
    vector<string> patronymics = {
    "Иванович","Петрович","Сидорович","Николаевич","Илонович","Альбертович","Исаакович","Робертович","Маркович",
    "Иосифович","Владимирович","Карлович","Алексеевич","Михаилович","Дмитриевич"
    };
    string result;
    result = surnames.at(rand() % 5) + " ";
    result += names.at(rand() % 5) + " ";
    result += patronymics.at(rand() % 5) + " ";
    return result;
}

string make_number()
{
    string result;
    vector<string>number = { "0","1", "2", "3", "4", "5", "6", "7", "8", "9" };
    result = "89";
    for (int i = 0; i < 9; i++)
    {
        result += number.at(rand() % 10);
    }
    return result;
}

string make_birthday()
{
    string result;
    vector<string>day = { "01","02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31" };
    vector<string>mounth = { "01","02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", };
    vector<string>year = { "1997","1998", "1999", "2000", "2001", "2002", "2003" };
    result = day.at(rand() % 31) + ".";
    result += mounth.at(rand() % 12) + ".";
    result += year.at(rand() % 7);
    return result;
}

unsigned int hashtab_hash(string key)
{
    char c;
    unsigned int myhash = 0;
    for (int i = 0; i < key.length(); i++)
    {
        c = key[i];
        myhash += (int)c * (2 * i);
    }
    return myhash % HASHTAB_SIZE;
}

Node* make(Node*& temp, string fio, string  passport, string  phone)
{
    Node* temp0 = temp;
    while (temp0->next != NULL)
        temp0 = temp0->next;
    Node* temp1 = new Node;
    temp1->fio = fio;
    temp1->passport = passport;
    temp1->phone = phone;
    temp1->next = NULL;
    temp0->next = temp1;
    temp1 = temp0;
    return temp1;
}

void hashtab_init()
{
    for (int i = 0; i < 100; i++)
        FIOtab[i] = NULL;
    colisions = 0;
}

void hashtab_add()
{

    for (int i = 0; i < 100; i++) {
        string fio = getFio();
        string passport = make_number();
        string phone = make_birthday();
        Node* temp = new Node;
        unsigned index = hashtab_hash(fio);
        if (FIOtab[index] == NULL)
        {
            temp->fio = fio;
            temp->passport = passport;
            temp->phone = phone;
            temp->next = NULL;
            FIOtab[index] = temp;
        }
        else
        {
            temp = FIOtab[index];
            Node* temp2 = make(temp, fio, passport, phone);
            FIOtab[index] = temp2;
            colisions += 1;
        }
    }
}
void searhHASH(string searh)
{
    for (int i = 0; i < HASHTAB_SIZE; i++)
        if (FIOtab[i] != NULL)
        {
            if (FIOtab[i]->next == NULL && FIOtab[i]->fio == searh) {

                cout << "\n\t Найдено по индексу: " << i;
                cout << "\nФИО: " << FIOtab[i]->fio;
                cout << "\nТелефон: " << FIOtab[i]->passport;
                cout << "\nДата рождения: " << FIOtab[i]->phone;
            }
            else
            {
                Node* p = FIOtab[i];
                while (p != 0)
                {
                    if (p->fio == searh) {
                        cout << "\n\t Найдено по индексу: " << i;
                        cout << "\nФИО: " << p->fio;
                        cout << "\nТелефон: " << p->passport;
                        cout << "\nДата выхода: " << p->phone;
                    }
                    p = p->next;
                }
            }
        }
}

int main()
{
    setlocale(0, "rus");
    srand(time(NULL));
    hashtab_init();
    hashtab_add();
    string searh = getFio();
    cout << "\nРазмер таблицы: " << HASHTAB_SIZE;
    cout << "\nПоиск ФИО: ";
    cout << searh;
    searhHASH(searh);
    cout << endl;
    cout << "\nКоллизий: " << colisions;
    return 0;
}
