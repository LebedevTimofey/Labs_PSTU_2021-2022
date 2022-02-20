#include<iostream>
#include<ctime>
using namespace std;

void function(int arr[5][5])
{
	int sto, str;
	int n = 5;
	int sum =0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
	}
	int max = sum;
	for (int i = 0; i <= n - 3; i++)
	{
		for (int j = 0; j <= n - 3; j++)
		{
			sum = 0;
			for (int mi = i; mi <= (i + 2); mi++)
			{
				for (int mj = j; mj <= (j + 2); mj++)
				{
					sum += arr[mi][mj];
				}
			}
			if (sum > max)
			{
				max = sum;
				sto = j;
				str = i;
			}
		}
	}
	
	cout << max << " " << "строка-" << str+1 << " " << "столбец-" << sto+1;
}

int main()
{
	srand(time(NULL));
	int arr[5][5];
	setlocale(LC_ALL, "ru");
	 
	 for (int i = 0; i < 5; i++)
	 {
		 for (int j = 0; j < 5; j++)
		 {
			 arr[i][j] = rand() % 10;
		 }
	 }
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
			cout << " ";
		}
		cout << endl;
	}
	
	function(arr);
}
