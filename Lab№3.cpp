#include "stdafx.h"
#include "math.h"
#include "iostream"
using namespace std;
double summa()
{
	float e = 1e-4;
	float result = 0;
	float row = 0;
	int k = 0;
	int sign = 1;
	do
	{
		k++;
		row = 1. / (5*k*k*k);
		result += sign*row;
		sign *= -1;
	} while (row >= e);
	double a = round(result * 10000) / 10000;
	return a;
}
int main()
{
	cout << summa() << endl;
	system("pause");

}
