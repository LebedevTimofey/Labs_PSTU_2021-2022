#include <iostream>

using namespace std;

class Triad { //Базовый, абстрактный класс

public:

    virtual bool isLeapYear(int y) = 0; //Виртуальная функция

public:

    int day;
    int month;
    int year;
};

class Date : public Triad { //Производный класс

public:

    Date() { //Конструктор по умолчанию
        day = 01;
        month = 01;
        year = 1970;
    }

    Date(int d, int m, int y) { //Инициализирующий конструктор (конструктор с параметром)
        day = d;
        month = m;
        year = y;
    }

    //Сеттеры

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    //Геттеры

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }



    //Остальные функции

    int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; //Массив дней для каждого месяца (год не високосный)

    bool isLeapYear(int year) { //Функция проверки является ли год високосным (реализуем виртуальный метод абстрактного класса)
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            return true;
        }
        return false;
    }

    bool checkDay(Date& date) { //Функция проверки дня на валидность
        for (auto i : { 0, 2, 4, 6, 7, 9, 11 }) {
            if (date.getMonth() == i + 1) {
                if (date.getDay() >= 1 && date.getDay() <= days_in_month[i]) {
                    return true;
                }
            }
        }
        for (auto i : { 3, 5, 8, 10 }) {
            if (date.getMonth() == i + 1) {
                if (date.getDay() >= 1 && date.getDay() <= days_in_month[i]) {
                    return true;
                }
            }
        }
        if (date.getMonth() == 2) {
            if (isLeapYear(date.getYear())) {
                if (date.getDay() >= 1 && date.getDay() <= 29) {
                    return true;
                }
            }
            else {
                if (date.getDay() >= 1 && date.getDay() <= 28) {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkMonth(Date& date) { //Функция проверки месяца на валидность
        if (date.getMonth() >= 1 && date.getMonth() <= 12) {
            return true;
        }
        return false;
    }
    bool checkYear(Date& date) { //Функция проверки года на валидность
        if (date.getYear() >= 1000 && date.getYear() <= 3000) {
            return true;
        }
        return false;
    }
    void checkDate(Date& date) { //Функция проверки даты на валидность
        if ((checkDay(date) == true) &&
            (checkMonth(date) == true) &&
            (checkYear(date) == true)) {
            cout << "This date is correct!\n";
        }
        else {
            cout << "This date is NOT correct!\n";
        }
    }
};
int main(void) {
    int d, m, y;
    cout << "Input day: ";
    cin >> d;
    cout << "Input mounth: ";
    cin >> m;
    cout << "Input year: ";
    cin >> y;
    Date obj(d, m, y); //Устанавливаем значение даты с помощью инициализирующего конструктора
    obj.checkDate(obj); //Проверяем дату на валидность
    return 0;
}
