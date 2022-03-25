#include <stdlib.h>
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;
// Рекурсивная функция нахождения степени числа.
long long unsigned int DegreeOfNumber(int base_of_degree, int exponent)
{
	if (exponent == 1)
		return base_of_degree;
	else if (exponent == 0)
		return 1;
	else if (base_of_degree == 0)
		return 0;
	else if (base_of_degree == 1)
		return 1;
	else
		return base_of_degree * DegreeOfNumber(base_of_degree, exponent - 1);
}

//Функция заполнения массива псевдослучайными числами.
void FillArr(int arr[], int size)
{
	int min = 0;
	int max = 9;
	int randNum{ -2 };

	int i{ 0 };
	while (i < size)
	{
		randNum = rand() % (max - min + 1) + min;
		for (int j = i; j >= 0; --j)
		{
			if (arr[j] == randNum)
				break;
			else if (j == 0)
			{
				arr[i] = randNum;
				++i;
			}
		}
	}
}

// Функция выводит одномерный массив на экран.
void PrintArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i]; // setw(4) - Задает ширину поля отображения для следующего элемента в потоке.
}

// Функция подсчитывает количество быков.
int BoolsCounter(int arr[], int size, int possibleNumber)
{
	int boolsCounter{ 0 };
	int n1{ 0 }, n2{ 0 }, n3{ 0 }, n4{ 0 };
	n4 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n3 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n2 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n1 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;

	//cout << "\n" << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4;

	for (int i = 0; i < size; i++)
		if (arr[i] == n1 || arr[i] == n2 || arr[i] == n3 || arr[i] == n4) // Сколько цифр числа угадано (быки).
			boolsCounter++;
	//cout << "\nboolsCounter " << boolsCounter;
	return boolsCounter;
}

// Функция подсчитывает количество коров.
int CowsCounter(int arr[], int size, int possibleNumber)
{
	int cowsCounter{ 0 };
	int n1{ 0 }, n2{ 0 }, n3{ 0 }, n4{ 0 };
	n4 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n3 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n2 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n1 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;

	for (int i = 0; i < size; i++) // Возможно ошибка в работе !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	{
		if (arr[i] == n1 && i == 0 || arr[i] == n2 && i == 1 ||
			arr[i] == n3 && i == 2 || arr[i] == n4 && i == 3) // Сколько цифр угадано и стоит на нужном месте (коровы).
			cowsCounter++;
	}
	//cout << "\ncowsCounter " << cowsCounter;
	return cowsCounter;
}

// Функция вывода на экран, числа введенного пользователем, возможного варианта загаданного числа.
void ShowPossibleNum(int possibleNumber)
{
	int n1{ 0 }, n2{ 0 }, n3{ 0 }, n4{ 0 };
	n4 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n3 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n2 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;
	n1 = possibleNumber % 10;
	possibleNumber = possibleNumber / 10;

	cout << n1 << '\t' << n2 << '\t' << n3 << '\t' << n4 << "\n";
}

//Функция вывода двумерного массива на экран.
void PrintArr(int arr[][8], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(2) << arr[i][j];
		}
		cout << endl;
	}
}

// Функция Хода конем.
void HorseMove(int arr[][8], int size)
{
	int row{ 0 };
	int col{ 0 };
	// 3 вверх, 2 влево
	int nextMoveRow =  
}