#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*
	double one, two;

	std::cout << "������ �����: ";
	std::cin >> one;
	std::cout << "������ �����: ";
	std::cin >> two;
	std::cout << "\n�����: " << one + two;
	std::cout << "\n��������: " << one - two;
	std::cout << "\n������������: " << one * two;
	std::cout << "\n�������: " << one / two;
	*/
	/*double one, two, three;
	double onePrice = 1200, twoPrice = 2200, threePrice = 5000;

	std::cout << "������� �������� ������? (" << onePrice << "�): ";
	std::cin >> one;
	std::cout << "������� ������ ������? (" << twoPrice << "�): ";
	std::cin >> two;
	std::cout << "������� ������������� ������? (" << threePrice << "�): ";
	std::cin >> three;
	double oneSum = one * onePrice;
	double twoSum = two * twoPrice;
	double threeSum = three * threePrice;
	double totalSum = oneSum + twoSum + threeSum;

	std::cout << "\n����� �� �������: " << oneSum;
	std::cout << "\n����� �� �����: " << twoSum;
	std::cout << "\n����� �� ������������: " << threeSum;
	std::cout << "\n�����: " << totalSum;
	std::cout << "\n";
	*/
	/*int a;
	std::cin >> a;
	if (a > 0)
	{
		std::cout << "�����\n";
	}
	else if (a < 0)
	{
		std::cout << "�����\n";
	}
	else
	{
		std::cout << "�����\n";
	}
	*/

	char oper;
	double num1;
	double num2;

	std::cout << "������ �����: ";
	std::cin >> num1;
	std::cout << "��������: ";
	std::cin >> oper;
	std::cout << "������ �����: ";
	std::cin >> num2;
	if (oper == '+')
	{
		std::cout << "\n�����: " << num1 + num2 << "\n";
	}
	else if (oper == '-')
	{
		std::cout << "\n��������: " << num1 - num2 << "\n";
	}
	else if (oper == '*')
	{
		std::cout << "\n������������: " << num1 * num2 << "\n";
	}
	else if (oper == '/')
	{
		if (num2 != 0)
			std::cout << "\n�������: " << num1 / num2 << "\n";
		else
			std::cout << "\n�� ���� ������ ������!\n";
	}
	else if (oper == '%')
	{
		if ((num1 < 0 && num2 >=0) || (num1 >= 0 && num2 < 0))
			std::cout << "\n������� �� ����� ���� �������������\n";
		else
			std::cout << "\n������� �� �����: " << num1 * num2 * 0.01 << "\n";
	}
	else
	{
		std::cout << "\n�����. �����������.\n";
	}



	return 0;
}