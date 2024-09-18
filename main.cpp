#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
	double one, two;

	std::cout << "Первое число: ";
	std::cin >> one;
	std::cout << "Второе число: ";
	std::cin >> two;
	std::cout << "\nСумма: " << one + two;
	std::cout << "\nРазность: " << one - two;
	std::cout << "\nПроизведение: " << one * two;
	std::cout << "\nЧастное: " << one / two;
	*/
	/*double one, two, three;
	double onePrice = 1200, twoPrice = 2200, threePrice = 5000;

	std::cout << "Сколько чайников купить? (" << onePrice << "р): ";
	std::cin >> one;
	std::cout << "Сколько утюгов купить? (" << twoPrice << "р): ";
	std::cin >> two;
	std::cout << "Сколько холодильников купить? (" << threePrice << "р): ";
	std::cin >> three;
	double oneSum = one * onePrice;
	double twoSum = two * twoPrice;
	double threeSum = three * threePrice;
	double totalSum = oneSum + twoSum + threeSum;

	std::cout << "\nСумма за чайники: " << oneSum;
	std::cout << "\nСумма за утюги: " << twoSum;
	std::cout << "\nСумма за холодильники: " << threeSum;
	std::cout << "\nИтого: " << totalSum;
	std::cout << "\n";
	*/
	/*int a;
	std::cin >> a;
	if (a > 0)
	{
		std::cout << "Повар\n";
	}
	else if (a < 0)
	{
		std::cout << "Котик\n";
	}
	else
	{
		std::cout << "Ыыыыы\n";
	}
	*/

	char oper;
	double num1;
	double num2;

	std::cout << "Первое число: ";
	std::cin >> num1;
	std::cout << "Действие: ";
	std::cin >> oper;
	std::cout << "Второе число: ";
	std::cin >> num2;
	if (oper == '+')
	{
		std::cout << "\nСумма: " << num1 + num2 << "\n";
	}
	else if (oper == '-')
	{
		std::cout << "\nРазность: " << num1 - num2 << "\n";
	}
	else if (oper == '*')
	{
		std::cout << "\nПроизведение: " << num1 * num2 << "\n";
	}
	else if (oper == '/')
	{
		if (num2 != 0)
			std::cout << "\nЧастное: " << num1 / num2 << "\n";
		else
			std::cout << "\nНа ноль делить нельзя!\n";
	}
	else if (oper == '%')
	{
		if ((num1 < 0 && num2 >=0) || (num1 >= 0 && num2 < 0))
			std::cout << "\nПроцент не может быть отрицательным\n";
		else
			std::cout << "\nПроцент от числа: " << num1 * num2 * 0.01 << "\n";
	}
	else
	{
		std::cout << "\nГовно. Переделывай.\n";
	}



	return 0;
}