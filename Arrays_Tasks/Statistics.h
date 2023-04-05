#pragma once
#include"constants.h"

int Sum(const int array[], const int n);
int Sum(const double array[], const int n);
int Sum(const char array[], const int n);
int Sum(const int array[ROWS][COLS], const int ROWS, const int COLS);
int Sum(const double array[ROWS][COLS], const int ROWS, const int COLS);
int Sum(const char array[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int array[], const int n);
double Avg(const double array[], const int n);
double Avg(const char array[], const int n);
double Avg(const int array[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double array[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const char array[ROWS][COLS], const int ROWS, const int COLS);

int MinValueIn(const int array[], const int n);
int MinValueIn(const double array[], const int n);
int MinValueIn(const char array[], const int n);
int MinValueIn(const int array[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(const double array[ROWS][COLS], const int ROWS, const int COLS);
int MinValueIn(const char array[ROWS][COLS], const int ROWS, const int COLS);

int MaxValueIn(const int array[], const int n);
int MaxValueIn(const double array[], const int n);
int MaxValueIn(const char array[], const int n);
int MaxValueIn(const int array[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(const double array[ROWS][COLS], const int ROWS, const int COLS);
int MaxValueIn(const int array[ROWS][COLS], const int ROWS, const int COLS);