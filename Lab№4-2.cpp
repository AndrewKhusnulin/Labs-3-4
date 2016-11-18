#include <iostream>
#include <ctime>   
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int n, m, sum;
	n = 1+ rand() % 10;
	m = 1+ rand() % 10;
	sum = 0;
	float **Array = new float*[n];
	for (int i = 0; i < n; i++)
		Array[i] = new float[m];
	for (int k = 0; k < n; k++)
		for (int c = 0; c < m; c++)
			Array[k][c] = rand() % 100 + 1;
	for (int k = 0; k < n; k++)
	{
		for (int c = 0; c < m; c++)
			cout << setw(m) << Array[k][c] << "   ";
		cout << endl;
	}
	for (int k = 0; k < n; k++)
		for (int c = 0; c < m; c++)
			sum += Array[k][c];
	cout << "Сумма " << sum << endl;
	for (int i = 0; i < n; i++)
		delete[]Array[i];
	system("pause");
}
