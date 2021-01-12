#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>

using namespace std;

void input(int* a, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << endl;
}

void indexLowwer(int* a, const int size)
{
	bool flag = false;
	int min, imin;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] % 2) != 0)
		{
			if (!flag)
			{
				flag = true;
				min = a[i];
				imin = i;
			}
			else if (min > a[i])
			{
				min = a[i];
				imin = i;
			}

		}
	}

	if (!flag)
	{
		cout << "Всі числа парні. " << endl;
	}
	else
	{
		cout << "Індекс найменшого непарного елемента масиву: " << imin << endl;
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	int n = 0;
	cout << "Введіть розмір масиву: "; cin >> n;
	int* a = new int[n];

	input(a, n);
	Print(a, n);
	indexLowwer(a, n);

	delete[] a;

	return 0;
}