#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>


using namespace std;


class Pair {
private:
    int first;
    double second;
public:
    Pair() {
        this->first = 0;
        this->second = 0;
    }
    Pair(int first, double second) {
        this->first = first;
        this->second = second;
    }
    void set(double first, double second) {
        this->first = first;
        this->second = second;
    }
    int get_f() {
        return first;
    }
    double get_s() {
        return second;
    }
    void show() {
        cout << "Введено ==> first: " << first;
        cout << " second: " << second << endl;
    }
    friend ostream& operator<<(ostream& os, const Pair& d) {
        return os << "( " << d.first << " : " << d.second << " )";
    }

    Pair operator-(const Pair& P) {
        cout << "Вычитание " << *this << " и " << P << endl;
        this->first = this->first - P.first;
        this->second = this->second - P.second;
        cout << "Получилось" << *this << endl;
        return *this;
    }

    Pair operator+(const int& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->first = this->first + dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }

    Pair operator+(const double& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->second = this->second - dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }
    void operator+=(Pair& temp) {
        this->first = temp.first + this->first;
        this->second = temp.second + this->second;
    }

    bool operator==(const Pair& temp) {
        if ((this->first == temp.first) && (this->second == temp.second)) { return true; }
        else { return false; }
    }

    bool operator<(const Pair& temp) {
        double sum_temp = (double)temp.first + temp.second;
        double sum_this = (double)this->first + this->second;
        if (sum_temp < sum_this) {
            return true;
        }
        else {
            return false;
        }
    }

    void random() {
        first = rand() % 10;
        second = rand() % 10;
    }
};


ostream& operator<<(ostream& stream, vector<Pair>& l) {
    for_each(l.begin(), l.end(), [](Pair& k) {cout << k << " "; });
    return stream;
}

int main() {
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    vector<Pair> v(5);

    generate(v.begin(), v.end(), []() {
        Pair p;
        p.random();
        return p;
        });
    cout << v;

    Pair max(0, 0);
    for_each(v.begin(), v.end(), [&max](Pair& p) {
        if (((double)p.get_f() + p.get_s()) > ((double)max.get_f() + max.get_s())) {
            max.set(p.get_f(), p.get_s());
        }
        });
    //cout<<endl<<max;

    Pair min;
    min += max;
    for_each(v.begin(), v.end(), [&min](Pair& p) {
        if (((double)p.get_f() + p.get_s()) < ((double)min.get_f() + min.get_s())) {
            min.set(p.get_f(), p.get_s());
        }
        });
    //cout<<endl<<min;

    Pair sum;
    for_each(v.begin(), v.end(), [&sum](Pair& p) {sum += p; });
    sum.set((sum.get_f() / v.size()), (sum.get_s() / v.size()));

    //cout<<endl<<sum;

    cout << endl << "Введите позицию: ";
    int i;
    cin >> i;
    auto pos = v.begin();

    vector<Pair> v2(1, Pair(min.get_f(), min.get_s()));
    v.insert(next(pos, i - 1), v2.begin(), v2.end());
    cout << endl << v;

    auto forward_iter = remove_if(v.begin(), v.end(), [&sum](Pair& p) {
        return sum < p;
        });
    v.erase(forward_iter, v.end());
    cout << endl << v;

    for_each(v.begin(), v.end(), [&max](Pair& p) {
        p.set((p.get_f() / max.get_f()), (p.get_s() / max.get_s()));
        });
    cout << endl << v;

    return 0;
}
