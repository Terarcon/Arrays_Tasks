#include"stdafx.h"
#include"constants.h"

#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shifts.h"
#include"Search.h"

//#define TASKS
//#define ARRAYS1
#define ARRAYS2

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1
	const int n = 10;
	int array[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(array, n, 0, 5);
	//UniqueRand(array, n);
	Print(array, n);
	cout << "Sum of array elements: " << Sum(array, n) << endl;
	cout << "Average of elements: " << Avg(array, n) << endl;
	cout << "Min value: " << MinValueIn(array, n) << endl;
	cout << "Max value: " << MaxValueIn(array, n) << endl;
	Search(array, n);
#ifdef TASKS
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100;
	}
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	cout << "Sum of array elements: " << sum << endl;
	cout << "Average of elements: " << (double)sum / n << endl;

	int min, max;
	min = max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	cout << "Min value: " << min << endl;
	cout << "Max value: " << max << endl;
#endif // TASKS

	int number_of_shifts;
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	shiftLeft(array, n, number_of_shifts);
	Print(array, n);

	shiftRight(array, n, number_of_shifts);
	Print(array, n);
#endif // ARRAYS1

#ifdef ARRAYS2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Print(i_arr_2, ROWS, COLS);
	cout << "Sum of array elements: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Sum of array elements: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Search(i_arr_2, ROWS, COLS);

	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	//cout << delimiter << endl;
	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	cout << "Min value: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Max value: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;

	int number_of_shifts;
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;;

	cout << "Enter number of right shifts: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
#endif // ARRAYS2
}