﻿#include <iostream>
#include "Library.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
	srand(time(NULL));

	char answer{ -1 };
	do
	{
		cout << "Enter task number:: "
			<< "\nTask 1."
			<< "\nTask 2."
			<< "\nTask 3."
			<< endl;
		int taskChose{ 0 };
		cin >> taskChose;

		switch (taskChose)
		{
		case 1:	// task_1
		{
			/*
			1. Написать рекурсивную функцию нахождения степени
			   числа.
			*/

			cout << "Enter the base of the degree: \n"; // Введите основание степени.
			int base_of_degree{ 0 }, exponent{ 0 }; // Основание степени, показатель степени.
			cin >> base_of_degree;
			cout << endl;

			cout << "Enter exponent: \n"; // Введите показатель степени.
			cin >> exponent;
			cout << endl;

			cout << base_of_degree << " in exponent " << exponent << " = "
				<< DegreeOfNumber(base_of_degree, exponent) << endl;
			cout << endl;
		}
		break;
		case 2:	// task_2	
			/*
			2. Написать игру «Быки и коровы». Программа "загадывает"
			   четырёхзначное число и играющий должен угадать его .
			   После ввода пользователем числа программа сообщает,
			   сколько цифр числа угадано (быки) и сколько цифр
			   угадано и стоит на нужном месте (коровы). После
			   отгадывания числа на экран необходимо вывести
			   количество сделанных пользователем попыток. В
			   программе необходимо использовать рекурсию.
			*/
		{
			const int size{ 4 };
			int arr[size]{ -1, -1, -1, -1 };
			FillArr(arr, size);
			//PrintArray(arr, size);
			cout << "Try guess the number of four digit: ";
			int possibleNumber{ 0 };
			cin >> possibleNumber;
			//MatchCheck(arr, size, possibleNumber);
			int bools{ 0 }, cows{ 0 };
			bools = BoolsCounter(arr, size, possibleNumber);
			//cows = CowsCounter();


		}
		break;
		case 3: // task_3		
			/*
			3. Дана шахматная доска размером 8х8 и шахматный конь.
			   Программа должна запросить у пользователя координаты
			   клетки поля и поставить туда коня. Задача программы
			   найти и вывести путь коня, при котором он обойдет все
			   клетки доски, становясь в каждую клетку только один раз.
			   (Так как процесс отыскания пути для разных начальных
			   клеток может затянуться, то рекомендуется сначала
			   опробовать задачу на поле размером 6х6). В программе
			   необходимо использовать рекурсию.
			*/

			break;
		}

		cout << endl;
		cout << "Do you want to continue? type y (yes) or n (no) : ";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}