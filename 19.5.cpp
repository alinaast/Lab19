#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int m, i, j, n;
	int s = 0;
	int k = 1;
	cout << "Введите порядок матрицы: ";
	cin >> m;
	int** a = new int* [m];
	for (i = 0; i < m; i++)
		a[i] = new int[m];
	for (i = 0; i < m; i++)
		for (j = 0; j < m; j++)
		{
			cout << "Введите A[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	for (n = 1; n < m; n++)
	{
		for (i = n; i < m; i++)
		{
			s = s + a[i][i - k];
		}
		k++;
		cout << "Сумма равна: " << s << endl;
		s = 0;
	}
	k = 1;
for (n = 1; n < m; n++)
	{
		for (j = n; j < m; j++)
		{
			s = s + a[j - k][j];
		}
		k++;
		cout << "Сумма равна: " << s << endl;
		s = 0;
	}
	return 0;
}
