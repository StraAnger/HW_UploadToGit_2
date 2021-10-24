#include <iostream>

using namespace std;

int main()
{
	cout << "Task 1:" << endl;
	/*Задание 1. Пользователь вводит число. Определить количество цифр в этом числе, посчитать их сумму и среднее
	арифметическое. Определить количество нулей в этом числе.Общение с пользователем организовать через меню. */

	int inputNumber, countNumber, powOfTen = 1, countDigits = 1, sumOfDigits = 0, anyDigit, countZeroes = 0, divisionOfNumbers;
	short unsigned int optionNumber;
	cout << "Enter the number: ";
	cin >> inputNumber;
	countNumber = inputNumber;

	cout << "Enter 1 for number of digits,2 for sum of digits,3 for division of sum by number of digits, 4 for total number of zeroes: ";
	cin >> optionNumber;
	switch (optionNumber) {
	case 1: {
		while (countNumber / 10 != 0) {
			countNumber = countNumber / 10;
			++countDigits;
		}
		cout << "Number of digits: " << countDigits << endl;
		break;
	}
	case 2: {
		while (countNumber / 10 != 0) {
			countNumber = countNumber / 10;
			++countDigits;
		}
		for (int i = 0; i < countDigits; ++i) {
			powOfTen *= 10;
		}
		for (int i = powOfTen; i >= 1; i /= 10) {
			anyDigit = (inputNumber % (10 * i)) / i;
			sumOfDigits += anyDigit;
		}
		cout << "Sum of digits is: " << sumOfDigits << endl;
		break;
	}
	case 3: {
		while (countNumber / 10 != 0) {
			countNumber = countNumber / 10;
			++countDigits;
		}
		for (int i = 0; i < countDigits; ++i) {
			powOfTen *= 10;
		}
		for (int i = powOfTen; i >= 1; i /= 10) {
			anyDigit = (inputNumber % (10 * i)) / i;
			sumOfDigits += anyDigit;
		}
		divisionOfNumbers = sumOfDigits / countDigits;
		cout << "Division of sum by number of digits is: " << divisionOfNumbers << endl;
		break;
	}
	case 4: {
		while (countNumber / 10 != 0) {
			countNumber = countNumber / 10;
			++countDigits;
		}
		for (int i = 0; i < countDigits; ++i) {
			powOfTen *= 10;
		}
		for (int i = powOfTen; i >= 1; i /= 10) {
			anyDigit = (inputNumber % (10 * i)) / i;
			if ((anyDigit == 0) && (countDigits > 1)) {
				++countZeroes;
			}
		}
		cout << "Number of zeroes is: " << countZeroes << endl;
		break;
	}
	default:
		cout << "Wrong entry" << endl;
		break;
	}

	cout << "Task 2:" << endl;
	/*Задание 2. Написать программу, которая выводит на
экран шахматную доску с заданным размером клеточки. */

	short unsigned int cellSize;

	cout << "Enter the cell size: ";
	cin >> cellSize;
	cout << endl;
	cout << endl;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					for (int i = 0; i < cellSize; ++i) {
						cout << "*";
					}
				}
				else {
					for (int i = 0; i < cellSize; ++i) {
						cout << "-";
					}
				}
			}
			else {
				if (j % 2 == 0) {
					for (int i = 0; i < cellSize; ++i) {
						cout << "*";
					}
				}
				else {
					for (int i = 0; i < cellSize; ++i) {
						cout << "-";
					}
				}
			}
		}
		cout << endl;
		cout << endl;
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					for (int i = 0; i < cellSize; ++i) {
						cout << "-";
					}
				}
				else {
					for (int i = 0; i < cellSize; ++i) {
						cout << "*";
					}
				}
			}
			else {
				if (j % 2 == 0) {
					for (int i = 0; i < cellSize; ++i) {
						cout << "-";
					}
				}
				else {
					for (int i = 0; i < cellSize; ++i) {
						cout << "*";
					}
				}
			}
		}
		cout << endl;
		cout << endl;
	}
}