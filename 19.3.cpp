#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, i, j, n, l, k, t;
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
	for (i = 0, t = (m - 1); i <= (m / 2), t >= (m / 2); i++, t--)
		for (j = 0, k = (n - 1); j <= (n / 2), k >= (n / 2); j++, k--)
		{
			l = a[i][j];
		    a[i][j] = a[t][k];
			a[t][k] = l;
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}