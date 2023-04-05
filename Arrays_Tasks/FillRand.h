#pragma once
#include"constants.h"
#include"stdafx.h"

void FillRand(int array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void UniqueRand(int array[], const int n);
void UniqueRand(double array[], const int n);
void UniqueRand(char array[], const int n);
void UniqueRand(int array[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double array[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char array[ROWS][COLS], const int ROWS, const int COLS);
