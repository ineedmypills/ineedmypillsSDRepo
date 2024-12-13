#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <fstream>
#include <string>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 3;
	const int newSize = 4;

	std::string fileName = "file.txt";

	std::string namesReadArray[size]{"Дошик", "Дошим", "Додо"};
	double priceReadArray[size]{ 65,96,150 };

	std::string namesWriteArray[newSize]{};
	double priceWriteArray[newSize]{};
	

	std::ofstream ArrayToRead;
	ArrayToRead.open(fileName, std::ofstream::out);
	if (ArrayToRead.is_open())
	{
		ArrayToRead << "namesArray=";
		for (int i = 0; i < size; i++)
		{
			if (i == 0) {
				ArrayToRead << namesReadArray[i];
			}
			else
			{
				ArrayToRead << "," << namesReadArray[i];
			}
		}
		ArrayToRead << "\n";
		ArrayToRead << "priceArray=";
		for (int i = 0; i < size; i++)
		{
			if (i == 0) {
				ArrayToRead << priceReadArray[i];
			}
			else
			{
				ArrayToRead << "," << priceReadArray[i];
			}
		}
	}
	else
	{
		std::cerr << "Err\n";
	}
	ArrayToRead.close();



	std::ifstream ArrayToWrite;
	ArrayToWrite.open(fileName, std::ofstream::out);

	std::string data;

	if (ArrayToWrite.is_open())
	{
		for (size_t i = 0; i < size; i++)
		{
			std::getline(ArrayToRead, namesWriteArray[i], ',');
		}
		for (size_t i = 0; i < size; i++)
		{
			std::getline(ArrayToRead, priceWriteArray[i], ',');
		}
	}
	else
	{
		std::cerr << "Err\n";
	}
	ArrayToWrite.close();

	return 0;
}