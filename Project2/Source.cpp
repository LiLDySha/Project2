#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int size = 10;
	int arr[size];
	int mas[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 11;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите числа в массив (от 0 до 10 включительно): ";
		std::cin >> mas[i];

		if (mas[i] < 0 || mas[i] > 10)
		{
			std::cout << "Ты того сего не делай, понял?";
			return 0;
		}
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "Массив рандомнович " << arr[i] << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "Массив вашевич " << mas[i] << std::endl;
	}
	
	for (int i = 0; i < size; i++)
	{
		if (mas[i] == arr[i])
		{
			std::cout << "\nТы удачник, в " << i <<  " номер попал";
		}
		else
		{
			std::cout << "\nНеудачник, ло... как там... ай не помню, того ты понял да? " << i;
		}
	}

	return 0;
}