#pragma once
#include"Shifts.h"
#include"stdafx.h"

#define SHIFTLEFT
#define SHIFTRIGHT

#ifdef SHIFTLEFT
void shiftLeft(int array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0];
		for (int i = 0; i < n; i++)
		{
			array[i] = array[i + 1];
		}
		array[n - 1] = buffer;
	}
}
void shiftLeft(double array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0];
		for (int i = 0; i < n; i++)
		{
			array[i] = array[i + 1];
		}
		array[n - 1] = buffer;
	}
}
void shiftLeft(char array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0];
		for (int i = 0; i < n; i++)
		{
			array[i] = array[i + 1];
		}
		array[n - 1] = buffer;
	}
}

void shiftLeft(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == (COLS - 1) && i != ROWS - 1)
				{
					array[i][j] = array[i + 1][0];
				}
				else
				{
					array[i][j] = array[i][j + 1];
				}
			}
		}
		array[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(double array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == (COLS - 1) && i != ROWS - 1)
				{
					array[i][j] = array[i + 1][0];
				}
				else
				{
					array[i][j] = array[i][j + 1];
				}
			}
		}
		array[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftLeft(char array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == (COLS - 1) && i != ROWS - 1)
				{
					array[i][j] = array[i + 1][0];
				}
				else
				{
					array[i][j] = array[i][j + 1];
				}
			}
		}
		array[ROWS - 1][COLS - 1] = buffer;
	}
}
#endif //SHIFTLEFT

#ifdef SHIFTRIGHT
void shiftRight(int array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			array[i] = array[i - 1];
		}
		array[0] = buffer;
	}
}
void shiftRight(double array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			array[i] = array[i - 1];
		}
		array[0] = buffer;
	}
}
void shiftRight(char array[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			array[i] = array[i - 1];
		}
		array[0] = buffer;
	}
}

void shiftRight(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					array[i][j] = array[i - 1][COLS - 1];
				}
				else
				{
					array[i][j] = array[i][j - 1];
				}
			}
		}
		array[0][0] = buffer;
	}
}
void shiftRight(double array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					array[i][j] = array[i - 1][COLS - 1];
				}
				else
				{
					array[i][j] = array[i][j - 1];
				}
			}
		}
		array[0][0] = buffer;
	}
}
void shiftRight(char array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					array[i][j] = array[i - 1][COLS - 1];
				}
				else
				{
					array[i][j] = array[i][j - 1];
				}
			}
		}
		array[0][0] = buffer;
	}
}
#endif //SHIFTRIGHT