#pragma once
#include"Statistics.h"

#define SUM
#define AVG
#define MINVALUEIN
#define MAXVALUEIN

#ifdef SUM
int Sum(const int array[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}
int Sum(const double array[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}
int Sum(const char array[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

int Sum(const int array[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += array[i][j];
		}
	}
	return sum;
}
int Sum(const double array[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += array[i][j];
		}
	}
	return sum;
}
int Sum(const char array[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += array[i][j];
		}
	}
	return sum;
}
#endif //SUM

#ifdef AVG
double Avg(const int array[], const int n)
{
	return (double)Sum(array, n) / n;
}
double Avg(const double array[], const int n)
{
	return (double)Sum(array, n) / n;
}
double Avg(const char array[], const int n)
{
	return (double)Sum(array, n) / n;
}

double Avg(const int array[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(array, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const double array[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(array, ROWS, COLS) / (ROWS * COLS);
}
double Avg(const char array[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(array, ROWS, COLS) / (ROWS * COLS);
}
#endif //AVG

#ifdef MINVALUEIN
int MinValueIn(const int array[], const int n)
{
	int min = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
int MinValueIn(const double array[], const int n)
{
	int min = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
int MinValueIn(const char array[], const int n)
{
	int min = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

int MinValueIn(const int array[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] < min)
				min = array[i][j];
		}
	}
	return min;
}
int MinValueIn(const double array[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] < min)
				min = array[i][j];
		}
	}
	return min;
}
int MinValueIn(const char array[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] < min)
				min = array[i][j];
		}
	}
	return min;
}
#endif //MINVALUEIN

#ifdef MAXVALUEIN
int MaxValueIn(const int array[], const int n)
{
	int max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
int MaxValueIn(const double array[], const int n)
{
	int max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
int MaxValueIn(const char array[], const int n)
{
	int max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

int MaxValueIn(const int array[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
		}
	}
	return max;
}
int MaxValueIn(const double array[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
		}
	}
	return max;
}
int MaxValueIn(const char array[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
		}
	}
	return max;
}
#endif //MAXVALUEIN