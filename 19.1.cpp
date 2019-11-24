#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int m, i, j, n, k, l;
	int min = 10000;
	int max = 0;
	cout << "Введите порядок матрицы: ";
	cin >> m >> n;
	int** a = new int* [m];
	for (i = 0; i < m; i++)
		a[i] = new int[n];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Введите A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
	{
			if (a[i][j] > max)
			{
				max = a[i][j];
				k = j;
			}
		if (a[i][j] < min)
			{
				min = a[i][j];
				l = j;
			}
		}
		a[i][k] = min;
		a[i][l] = max;
		max = 0;
		min = 10000;
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}