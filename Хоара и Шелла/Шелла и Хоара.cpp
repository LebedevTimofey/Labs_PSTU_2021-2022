#include <iostream>
using namespace std;

void hanoi(int n, int first, int second, int third)
{
    if (n > 0)
    {
        hanoi(n - 1, first, third, second);
        cout << first << " => " << second << endl;
        hanoi(n - 1, third, second, first);
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Кол-во дисков: ";
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}