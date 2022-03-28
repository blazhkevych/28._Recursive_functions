#include <iostream>
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
			int bools{ 0 }, cows{ 0 }, attempt{ 0 };
			cout << "\nWelcome to Bulls and Cows!\n";
			do
			{
				cout << "\nTry guess the number of four digit (Enter 4 suggested digits) : ";
				int possibleNumber{ 0 };
				cin >> possibleNumber;
				cout << "\n";
				ShowPossibleNum(possibleNumber);
				bools = BoolsCounter(arr, size, possibleNumber);
				cout << "\nBools: " << bools << endl;
				cows = CowsCounter(arr, size, possibleNumber);
				cout << "\nCows: " << cows << endl;
				attempt++;
			} while (cows < 4);
			cout << "Congratulations, you won on " << attempt << " try!\n";
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

			   https://ru.wikipedia.org/wiki/%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0_%D0%BE_%D1%85%D0%BE%D0%B4%D0%B5_%D0%BA%D0%BE%D0%BD%D1%8F

			*/

			const int size{ 8 };
			int arr[size][size]{ 0 };

			cout << "Enter the initial coordinates of the Knight (row / column, from 0 to 7):\n";
			int startHorsePosRow{ 0 }, startHorsePosCol{ 0 };
			cin >> startHorsePosRow;
			cin >> startHorsePosCol;
			arr[startHorsePosRow][startHorsePosCol] = 1; // значение "1" в массиве, для отметки места, где конь уже ступал и больше не должен ступать.
			PrintArr(arr, size);
			break;
		}

		cout << endl;
		cout << "Do you want to continue? type y (yes) or n (no) : ";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}