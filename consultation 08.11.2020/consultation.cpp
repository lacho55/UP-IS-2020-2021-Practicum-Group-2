﻿#include "stdafx.h"
#include <iostream>

using namespace std;
//KISS = keep it simple stupid
/*
Трайчо иска да си купи нов лаптоп.
Той е готов да даде от 1000 до 1500 лв. за лаптоп с най-малко 3 USB порта, най-малко 8
GB RAM и SSD диск.
Ако обаче лаптопът няма SSD или има по-малко от 8 GB RAM, той не иска да даде повече
от 800 лв.

Напишете булев израз, който по цена на лаптоп (реално число), брой USB портове
(естествено число), количество RAM (естествено число) и дали има SSD (булева
стойност) определя дали Трайчо ще си купи лаптопа.
*/

//double price, int memory, int ports, bool hasSSD
//cout << (price >= 1000 && price <= 1500 && ports >= 3 && memory >= 8 && hasSSD)
//cout << (price <= 800 && memory < 8 || !hasSSD)


/*
Историческият музей в София прави отстъпки на групи посетители. Колкото по-голяма е
групата, толкова по-голяма е отстъпката.
По-малко от 5 души: 0%
От 5 до 10 души: 5%
От 11 до 40 души: 20%
Повече от 40 души: 33%
Ако броят на посетителите се дели на 7, крайната цена се дели на 2 (след прилагането на
основната отстъпка, ако има такава), но общата отстъпка не трябва да надвишава 50%.
По даден брой хора от група определете колко процента ще бъде отстъпката им.
Пример 1: вход: 12, изход: 20%
Пример 2: вход: 28, изход: 50%
*/


int main()
{
	//int [-2 147 000 008 - +2 147 000 007]
	//unsigned int [0 - 4 000 000 000]
	/*unsigned int people = 0;
	double prom = 0;

	cin >> people;
	if (people >= 5 && people <= 10)
	{
		prom = 0.05;
	}
	else if (people >= 11 && people <= 40)
	{
		prom = 0.2;
	}
	else if (people > 40)
	{
		prom = 0.33;
	}

	if (people % 7 == 0 && people != 0)
	{
		prom = 0.5;
	}

	cout << prom * 100 << "%\n";*/


	/*int a = 0;
	do
	{
		std::cout << "Enter valid number: ";
		std::cin >> a;

	} while (a < 0 || a > 10);*/


	/*---------------------------------------------------------------------------------------------
	Напишете програма, която по даден интервал [a, b] (където b - a > 10) намира най-голямото число в този интервал,
	чиято последна цифра е равна на 7.  Пример: a=8, b=30 -> числото е 27
	*/
	//int a = 0, b = 0;
	//bool found = false;
	//do
	//{
	//	cin >> a >> b;
	//} while (!(b - a > 5));

	//while (a != b)
	//{
	//	if (b % 10 == 7)
	//	{
	//		found = true;
	//		break;
	//	}

	//	b--;
	//}

	////found ? &(cout << b << endl) : &(cout << boolalpha << found << endl);

	//if (found)
	//{
	//	cout << b << endl;
	//}
	//else
	//{
	//	cout << boolalpha << found << endl;
	//}

	//--------------------------------------------------------------------------------
	//break vs continue
	/*for (size_t i = 0; i < 106; i++)
	{
		if (i == 77)
		{
			continue;
		}
		if ((i % 10 == 7) || (i / 10 == 7))
		{
			cout << i << " ";
		}
		if (i >= 98)
		{
			break;
		}
	}*/
	//---------------------------------------------------------------------------------

	/*
	Напишете програма, която по даден интервал [a, b] (където b - a > 10) намира най-голямото просто число в този интервал,
	чиято последна цифра е равна на 7.  Пример: a=8, b=30 -> числото е 17
	*/
	/*int a = 0, b = 0;
	do
	{
		cin >> a >> b;
	} while (!(b - a > 10));

	bool found = false, isPrime = true;

	size_t i = b;
	for (; (i > a) && !found; i--)
	{
		if (i % 10 == 7)
		{
			isPrime = true;
			for (size_t j = 2; (j <= i / 2) && isPrime; j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			found = isPrime;
			if (found)
			{
				break;
			}
		}
	}

	if (found)
	{
		cout << i << endl;
	}
	else
	{
		cout << boolalpha << found << endl;
	}*/

	//--------------------------------------------------------------------------------
	//i-- vs --i
	//int i = 5;
	//cout << i << " ";
	////i--;
	//cout << i-- << " ";
	////--i;
	//cout << --i << " ";

	return 0;
}

