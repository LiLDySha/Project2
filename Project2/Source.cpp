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
		std::cout << "������� ����� � ������: ";
		std::cin >> mas[i];
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "������ ����������� " << arr[i] << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout << "������ ������� " << mas[i] << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		if (mas[i] == arr[i])
		{
			std::cout << "\n�� �������, � " << i <<  " ����� �����";
		}
		else
		{
			std::cout << "\n���������, ��... ��� ���... �� �� �����, ���� �� ����� ��? " << i;
		}
	}

	return 0;
}