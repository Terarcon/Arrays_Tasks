#pragma once
#include"constants.h"
#include"stdafx.h"

template<typename T>
void FillRand(T array[], const int n, int minRand = 0, int maxRand = 100);
template<typename T>
void FillRand(T array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

template<typename T>
void UniqueRand(T array[], const int n);
template<typename T>
void UniqueRand(T array[ROWS][COLS], const int ROWS, const int COLS);