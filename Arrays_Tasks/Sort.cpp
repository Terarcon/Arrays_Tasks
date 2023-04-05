#pragma once
#include"Sort.h"
#include"stdafx.h"

void Sort(int array[], const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i] < array[j])
			{
				array[i] ^= array[j];
				array[j] ^= array[i];
				array[i] ^= array[j];
			}
		}
	}
}
void Sort(char array[], const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i] < array[j])
			{
				array[i] ^= array[j];
				array[j] ^= array[i];
				array[i] ^= array[j];
			}
		}
	}
}
void Sort(int array[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[k][l] < array[i][j])
					{
						array[i][j] ^= array[k][l];
						array[k][l] ^= array[i][j];
						array[i][j] ^= array[k][l];
					}
					iter++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iter << " итераций" << endl;
}
void Sort(char array[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[k][l] < array[i][j])
					{
						array[i][j] ^= array[k][l];
						array[k][l] ^= array[i][j];
						array[i][j] ^= array[k][l];
					}
					iter++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iter << " итераций" << endl;
}