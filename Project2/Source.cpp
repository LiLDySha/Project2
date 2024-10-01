#include <iostream>
#include <Windows.h>
#include <cstdlib>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int a = rand() % 5 + 5;
	int arr[20]{ };

	std::cout << arr[5];


	return 0;
}