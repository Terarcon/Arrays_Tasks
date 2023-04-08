#pragma once
#include"constants.h"

void shiftLeft(int array[], const int n, int number_of_shifts);
void shiftLeft(double array[], const int n, int number_of_shifts);
void shiftLeft(char array[], const int n, int number_of_shifts);
void shiftLeft(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int array[], const int n, int number_of_shifts);
void shiftRight(double array[], const int n, int number_of_shifts);
void shiftRight(char array[], const int n, int number_of_shifts);
void shiftRight(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
