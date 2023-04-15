#pragma once
#include"Print.h"

template<typename T>
void Print(T array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Print(T array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}