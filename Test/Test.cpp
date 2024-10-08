#include <iostream>
using namespace std;
int main()
{
	int* p; //обьявлян указатель p на значение целочисленного типа
	int n, *q;
	n = 100;
	p = &n;
	cout << *p << endl;

	q = p;
	(*p)++;
	cout << *p << endl;
	cout << n << endl;
	cout << p << endl;

	int data[5];
	for (int i = 0; i < 5; i++) {
		data[i] = i + 1;
	}

	cout << "Массив из: ";
		for (int i = 0; i < 5; i++) {
			cout << endl << *(data + i);
		}

		int* ptr = data; //указатель на первый элемент массива
		cout << endl << *ptr << endl;
		// перемещаемся по массиву с помощью арифметики указателей 
		ptr++; // переходим ко второму элементу
		cout << *ptr;

		ptr += 2; //переходим к четвертому элементу
		cout << *ptr << endl;

}

