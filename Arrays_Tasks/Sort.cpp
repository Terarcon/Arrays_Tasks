#pragma once
#include"Sort.h"
#include"stdafx.h"

template<typename T>
void Sort(T array[], const int n)
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
template<typename T>
void Sort(T array[ROWS][COLS], const int ROWS, const int COLS)
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
	cout << "Array sorted in " << iter << " iterations" << endl;
}