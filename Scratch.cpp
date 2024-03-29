#include <iostream>

	int number = 50;

	int main()
	{

		for (int i = 0; i <= number; i++)
		{
			if (i % 2 == 0)
				std::cout << i << " ";

		}
		std::cout << "\n";

		for (int i = 0; i <= number; i++)
		{
			if (i % 2 != 0)
				std::cout << i << " ";
		}
	}


