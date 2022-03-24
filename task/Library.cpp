#include <stdlib.h>
#include <iostream>
using std::cout;
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

// Функция проверки введенного числа на совпадение с числом, загаданным компьютером.
void MatchCheck(int arr[], int size, int possibleNumber)
{

}

// Функция подсчитывает количество быков.
int BoolsCounter(int arr[], int size, int possibleNumber)
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

	//cout << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4;

	for (int i = 0; i < size; i++)
	{
		arr // продолжить дописывать подсчет быков, а потом и коров.
	}

	return 0;
}

//// Функция подсчитывает количество коров.
//int CowsCounter(int arr[], int size, int possibleNumber)
//{
//
//}