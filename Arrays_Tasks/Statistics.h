#pragma once
#include"constants.h"

template<typename T>
T Sum(const T array[], const int n);
template<typename T>
T Sum(const T array[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(const T array[], const int n);
template<typename T>
double Avg(const T array[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MinValueIn(const T array[], const int n);
template<typename T>
T MinValueIn(const T array[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T MaxValueIn(const T array[], const int n);
template<typename T>
T MaxValueIn(const T array[ROWS][COLS], const int ROWS, const int COLS);