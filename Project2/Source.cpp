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
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "Введите числа в массив: ";
		std::cin >> mas[i];
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