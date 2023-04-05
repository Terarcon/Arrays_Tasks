#pragma once
#include"FillRand.h"

#define FILLRAND
#define UNIQUERAND

#ifdef FILLRAND
void FillRand(int array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(char array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
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
void UniqueRand(int array[], const int n)
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
void UniqueRand(double array[], const int n)
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
void UniqueRand(char array[], const int n)
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

void UniqueRand(int array[ROWS][COLS], const int ROWS, const int COLS)
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
void UniqueRand(double array[ROWS][COLS], const int ROWS, const int COLS)
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
void UniqueRand(char array[ROWS][COLS], const int ROWS, const int COLS)
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