#include<iostream>
using namespace std;

void prost(int num, int a, ...)
{
	int* ptr = &a;
	while (num != 1)
	{
		for (int i = *ptr; i <= *(ptr + 1); i++)
		{
			int k = 0;
			for (int j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					k += 1;
				}
			}
			if (k == 0)
			{
				cout << i << " ";
			}
		}
		ptr += 1;
		cout << endl;
		num = num - 1;
	}
}





int main()
{
	prost(3, 2, 10, 20);
	prost(5, 100, 150, 300, 400, 500);
	prost(6, 600, 700, 800, 900, 1000, 1200);
	return 0;
}