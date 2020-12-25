#include<iostream>
#include<conio.h>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ru");
	const int e = 100; // создаем генератор случайных чисел
	int i, j, n, t[e], k = 0;
	cout << "Введите размер массива:" << endl;
	cin >> n;
	cout << "Массив t: " << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++) // удаление массива кратных 3
	{
		t[i] = rand() % 99;
		cout << t[i] << " ";
	}
	cout << endl;
	cout << "Удаляем элементы массива,индексы которых кратны 3:" << endl;
	for (i = 1; i < n; i++)

	{
		if ((i + k) % 3 == 0)
		{
			t[i] = t[i + k];
		}

	}

	for (i = 0; i < n; i++)
	{
		cout << i << "  ";//для проверки удаленных индексов
	}
	cout << endl;
	cout << "Проверка удаленных массивов: " << endl;
	for (i = 0; i < n; i++)//	Добавляем после каждого отрицательного элемента массива элемент со значением | M[ I-1 ]+1|.
	{
		cout << t[i] << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++)
		if (t[i] < 0)
		{
			for (j = n; j > i; j--)
				t[j] = t[j - 1];
			if (i != 0)
				t[j + 1] = t[i - 1] + 1;
			else t[j + 1] = 100;

			n++;
		}
	cout << endl;
	cout << "Нажмите любую клавишу для выхода" << endl;
}
