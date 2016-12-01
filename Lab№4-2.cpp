#include <iostream>
#include <ctime> 
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int **p, n, m, sum,j,i;
	
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;
	sum = 0;
	p = (int **)malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++)
		p[i] = (int *)malloc(m * sizeof(int));
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; j < m; j++)
		{
			p[i][j] = rand() % 100 + 1;
			cout << setw(m) << p[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < n; i++)
	for (j = 0; j < m; j++)
		sum += p[i][j];
	cout << "Сумма:" << sum << endl;
	for (i = 0; i < n; i++)
		free(p[i]);
	free(p);
	system("pause");
}
