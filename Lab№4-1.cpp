#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int *p = 0;
	int size = 0;
	int multiply = 1;
	cout << "Введите количество элементов массива: ";
	cin >> size;
	p = new int[size];
	for (int i = 0; i<size; i++) {
		p[i] = 1 + rand() % 100;
		cout << " " << p[i];
	}
	cout << endl;
	for (int i = 0; i<size; i++) {
		multiply *= p[i];
	}
	cout << "Произведение элементов массива: " << multiply << endl;
	free(p);
	system("pause");
}
