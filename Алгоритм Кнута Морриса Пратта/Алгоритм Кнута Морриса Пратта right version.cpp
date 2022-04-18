#include<iostream>
#include<string>
using namespace std;

int KMPSearch(string& str, string& templ)
{
    int strlen, templlen;
    strlen = str.size();
    templlen = templ.size();
    if (strlen == 0)
        cout << "Неверно задана строка\n";
    else if (templlen == 0)
        cout << "Неверно задана подстока\n";
    else
    {
        int i = 0, j = -1;
        int* d = new int[100];
        d[0] = -1;
        while (i < templlen - 1)
        {
            while (j >= 0 && templ[i] != templ[j])
                j = d[j];
            i++;
            j++;
            if (templ[i] == templ[j])
                d[i] = d[j];
            else
                d[i] = j;
        }
        i = 0, j = 0;
        while ((j < templlen) && (i < strlen))
        {
            while (j >= 0 && str[i] != templ[j])
                j = d[j];
            i++;
            j++;
        }
        delete[] d;
        if (j == templlen)
            return i - j;
        else
            return -1;
    }
}
int main()
{
    string str,templ;
    setlocale(LC_ALL, "ru");
    cout << "Введите строку" << endl;
    cin >> str;
    cout << "Введите подстроку" << endl;
    cin >> templ;
    int k = KMPSearch(str, templ);
    for (int i = k; i < k+templ.length(); i++)
    {
        str[i] = str[i + templ.length()];
    }
    cout << str;
    
}