#pragma once
#include"constants.h"

template<typename T>
void shiftLeft(T array[], const int n, int number_of_shifts);
template<typename T>
void shiftLeft(T array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>
void shiftRight(T array[], const int n, int number_of_shifts);
template<typename T>
void shiftRight(T array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);