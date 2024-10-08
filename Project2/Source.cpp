#include <iostream>
#include <Windows.h>
#include <cstdlib>

int Sum(int chisl1, int chisl2)
{
	return chisl1 + chisl2;
}

int Minus(int chisl1, int chisl2)
{
	return chisl1 - chisl2;
}

double Delen(int chisl1, int chisl2)
{
	return chisl1 / chisl2;
}

int Umnozh(int chisl1, int chisl2)
{
	return chisl1 * chisl2;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	while (true)
	{
		int chisl1 = 0;
		int chisl2 = 0;
		int op = 0;
		std::cout << "\nВведите первое число --> ";
		std::cin >> chisl1;
		std::cout << "\nВыберите операцию";
		std::cout << "\n1) +";
		std::cout << "\n2) -";
		std::cout << "\n3) /";
		std::cout << "\n4) *";
		std::cout << "\n--> ";
		std::cin >> op;
		std::cout << "\nВведите второе число --> ";
		std::cin >> chisl2;

		if (op == 1)
		{
			std::cout << Sum(chisl1, chisl2);
		}
		else if (op == 2)
		{
			std::cout << Minus(chisl1, chisl2);
		}
		else if (op == 3)
		{
			if (chisl2 == 0)
			{
				std::cout << "Делить на ноль незя";
				continue;
			}
			else
			{
				std::cout << Delen(chisl1, chisl2);
			}
		}
		else if (op == 4)
		{
			std::cout << Umnozh(chisl1, chisl2);
		}
	}
	return 0;
}