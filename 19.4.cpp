#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int m, i, j, n, l, k, t;
	int min = 10000;
	int max = 0;
	cout << "Введите порядок матрицы: ";
	cin >> m >> n;
	int** a = new int* [m];
	for (i = 0; i < m; i++)
		a[i] = new int[n];
	int** b = new int* [m];
	for (i = 0; i < m; i++)
		b[i] = new int[n];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Введите A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	for (t = 0; t < m; t++)
	{
		for (i = 0; i < m; i++)
		{
			if (a[i][0] < min && a[i][0] != 10000)
			{
				l = i;
				min = a[i][0];
				for (j = 0; j < n; j++)
					b[t][j] = a[i][j];
			}
		}
		a[l][0] = 10000;
		min = 100000;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	return 0;
}