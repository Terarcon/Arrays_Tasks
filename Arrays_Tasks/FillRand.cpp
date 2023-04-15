#pragma once
#include"FillRand.h"

#define FILLRAND
#define UNIQUERAND

#ifdef FILLRAND
template<typename T>
void FillRand(T array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}

template<typename T>
void FillRand(T array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
#endif // FILLRAND

#ifdef UNIQUERAND
template<typename T>
void UniqueRand(T array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}
}
template<typename T>
void UniqueRand(T array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				array[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (array[i][j] == array[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique) break;
				}
			} while (!unique);
		}
	}
}
#endif //UNIQUERAND