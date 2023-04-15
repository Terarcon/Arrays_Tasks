#pragma once
#include"Statistics.h"

#define SUM
#define AVG
#define MINVALUEIN
#define MAXVALUEIN

#ifdef SUM
template<typename T>
T Sum(const T array[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	return sum;
}

template<typename T>
T Sum(const T array[ROWS][COLS], const int ROWS, const int COLS)
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
template<typename T>
double Avg(const T array[], const int n)
{
	return (double)Sum(array, n) / n;
}

template<typename T>
double Avg(const T array[ROWS][COLS], const int ROWS, const int COLS)
{
	return(double)Sum(array, ROWS, COLS) / (ROWS * COLS);
}
#endif //AVG

#ifdef MINVALUEIN
template<typename T>
T MinValueIn(const T array[], const int n)
{
	int min = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}

template<typename T>
T MinValueIn(const T array[ROWS][COLS], const int ROWS, const int COLS)
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
template<typename T>
T MaxValueIn(const T array[], const int n)
{
	int max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}

template<typename T>
T MaxValueIn(const T array[ROWS][COLS], const int ROWS, const int COLS)
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