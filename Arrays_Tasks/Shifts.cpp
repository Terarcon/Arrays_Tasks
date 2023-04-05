#pragma once
#include"Shifts.h"

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
#endif //SHIFTRIGHT