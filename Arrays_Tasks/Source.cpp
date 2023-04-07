#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define delimiter "\n---------------------------\n"

const int ROWS = 3;
const int COLS = 3;

void FillRand(int array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char array[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char array[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);

void Print(int array[], const int n);
void Print(double array[], const int n);
void Print(char array[], const int n);
void Print(int array[ROWS][COLS], const int ROWS, const int COLS);
void Print(double array[ROWS][COLS], const int ROWS, const int COLS);
void Print(char array[ROWS][COLS], const int ROWS, const int COLS);

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
int MaxValueIn(const char array[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int array[], const int n, int number_of_shifts);
void shiftLeft(double array[], const int n, int number_of_shifts);
void shiftLeft(char array[], const int n, int number_of_shifts);
void shiftLeft(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftLeft(double array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftLeft(char array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int array[], const int n, int number_of_shifts);
void shiftRight(double array[], const int n, int number_of_shifts);
void shiftRight(char array[], const int n, int number_of_shifts);
void shiftRight(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void UniqueRand(int array[], const int n);
void UniqueRand(double array[], const int n);
void UniqueRand(char array[], const int n);
void UniqueRand(int array[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double array[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char array[ROWS][COLS], const int ROWS, const int COLS);

void Search(int array[], const int n);
void Search(double array[], const int n);
void Search(char array[], const int n);
void Search(int array[ROWS][COLS], const int ROWS, const int COLS);
void Search(double array[ROWS][COLS], const int ROWS, const int COLS);
void Search(char array[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int array[], const int n);
void Sort(char array[], const int n);
void Sort(int array[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char array[ROWS][COLS], const int ROWS, const int COLS);

//#define TASKS

//#define ARRAYS1
#define ARRAYS2

#define FILLRAND
#define PRINT
#define SUM
#define AVG
#define MINVALUEIN
#define MAXVALUEIN
#define SHIFTLEFT
#define SHIFTRIGHT
#define UNIQUERAND
#define SEARCH
#define SORT

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1
	const int n = 10;
	int array[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(array, n, 0, 5);
	//UniqueRand(array, n);
	Print(array, n);
	cout << "Sum of array elements: " << Sum(array, n) << endl;
	cout << "Average of elements: " << Avg(array, n) << endl;
	cout << "Min value: " << MinValueIn(array, n) << endl;
	cout << "Max value: " << MaxValueIn(array, n) << endl;
	Search(array, n);
#ifdef TASKS
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 100;
	}
	cout << "Enter array elements: ";
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	cout << "Sum of array elements: " << sum << endl;
	cout << "Average of elements: " << (double)sum / n << endl;

	int min, max;
	min = max = array[0];
	for (int i = 0; i < n; i++)
	{
		if (array[i] < min)
		{
			min = array[i];
		}
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	cout << "Min value: " << min << endl;
	cout << "Max value: " << max << endl;
#endif // TASKS

	int number_of_shifts;
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	shiftLeft(array, n, number_of_shifts);
	Print(array, n);

	shiftRight(array, n, number_of_shifts);
	Print(array, n);
#endif // ARRAYS1

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Print(i_arr_2, ROWS, COLS);
	cout << "Sum of array elements: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Sum of array elements: " << Avg(i_arr_2, ROWS, COLS) << endl;
	Search(i_arr_2, ROWS, COLS);

	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	//cout << delimiter << endl;
	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	cout << "Min value: " << MinValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Max value: " << MaxValueIn(i_arr_2, ROWS, COLS) << endl;

	int number_of_shifts;
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}

#ifdef FILLRAND
void FillRand(int array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(char array[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(int array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(double array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
void FillRand(char array[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			array[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
#endif // FILLRAND

#ifdef PRINT
void Print(int array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}
void Print(double array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}
void Print(char array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void Print(int array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(double array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(char array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
#endif // PRINT

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

#ifdef SORT
void Sort(int array[], const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i] < array[j])
			{
				array[i] ^= array[j];
				array[j] ^= array[i];
				array[i] ^= array[j];
			}
		}
	}
}
void Sort(char array[], const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (array[i] < array[j])
			{
				array[i] ^= array[j];
				array[j] ^= array[i];
				array[i] ^= array[j];
			}
		}
	}
}
void Sort(int array[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[k][l] < array[i][j])
					{
						array[i][j] ^= array[k][l];
						array[k][l] ^= array[i][j];
						array[i][j] ^= array[k][l];
					}
					iter++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iter << " итераций" << endl;
}
void Sort(char array[ROWS][COLS], const int ROWS, const int COLS)
{
	int iter = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (array[k][l] < array[i][j])
					{
						array[i][j] ^= array[k][l];
						array[k][l] ^= array[i][j];
						array[i][j] ^= array[k][l];
					}
					iter++;
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iter << " итераций" << endl;
}
#endif //SORT

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

void shiftLeft(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				if (j == (COLS - 1) && i != ROWS - 1)
				{
					array[i][j] = array[i + 1][0];
				}
				else
				{
					array[i][j] = array[i][j + 1];
				}
			}
		}
		array[ROWS - 1][COLS - 1] = buffer;
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

void shiftRight(int array[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = array[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i > -1; i--)
		{
			for (int j = COLS - 1; j > -1; j--)
			{
				if (j == 0 && i != 0)
				{
					array[i][j] = array[i - 1][COLS - 1];
				}
				else
				{
					array[i][j] = array[i][j - 1];
				}
			}
		}
		array[0][0] = buffer;
	}
}
#endif //SHIFTRIGHT

#ifdef UNIQUERAND
void UniqueRand(int array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(double array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(char array[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				i--;
				break;
			}
		}
	}
}

void UniqueRand(int array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				array[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (array[i][j] == array[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique) break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				array[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (array[i][j] == array[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique) break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(char array[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				array[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (array[i][j] == array[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique) break;
				}
			} while (!unique);
		}
	}
}
#endif //UNIQUERAND

#ifdef SEARCH
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
#endif //SEARCH