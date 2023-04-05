#pragma once
#include"Search.h"
#include"stdafx.h"

void Search(int array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false; //found number didn't meet before
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)
		{
			continue;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}
		if (count)
		{
			cout << "Value " << array[i] << " had been seen " << count << " times" << endl;
		}
		//if (count)printf("Value %i had been seen %i times\n", array[i], count);
	}
}
void Search(double array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)
		{
			continue;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}
		if (count)
		{
			cout << "Value " << array[i] << " had been seen " << count << " times" << endl;
		}
	}
}
void Search(char array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		int count = 0;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)
		{
			continue;
		}
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}
		if (count)
		{
			cout << "Value " << array[i] << " had been seen " << count << " times" << endl;
		}
	}
}

void Search(int array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (array[i][j] == array[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			//if element met earlier, then we don't need to show it again
			if (met_before) continue;
			//if element didn't meet earlier, then we need to know how
			//any times it repeated
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[i][j] == array[k][l])
					{
						count++;
					}
				}
			}
			if (count) printf("Значение %i повторяется %i раз\n", array[i][j], count);
		}
	}
}
void Search(double array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (array[i][j] == array[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			//if element met earlier, then we don't need to show it again
			if (met_before) continue;
			//if element didn't meet earlier, then we need to know how
			//any times it repeated
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[i][j] == array[k][l])
					{
						count++;
					}
				}
			}
			if (count) printf("Значение %i повторяется %i раз\n", array[i][j], count);
		}
	}
}
void Search(char array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (array[i][j] == array[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}
			//if element met earlier, then we don't need to show it again
			if (met_before) continue;
			//if element didn't meet earlier, then we need to know how
			//any times it repeated
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[i][j] == array[k][l])
					{
						count++;
					}
				}
			}
			if (count) printf("Значение %i повторяется %i раз\n", array[i][j], count);
		}
	}
}