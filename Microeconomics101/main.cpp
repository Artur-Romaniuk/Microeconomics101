#include <iostream>
#include <string>

#include "demand_funtions.h"
#include "common.h"



int main()
{
	ClearScreen();
	char user_input;
	while (true)
	{
		std::cout << "Choose what do you want to do.\n" << "List of options:\n" << "d - find demand function\n" << "p - price offer curve\n" << "i - income offer curve\n" << "e - Engel curve\n" << "q - to exit the program\n";
		std::cin >> user_input;
		switch (user_input)
		{
		case 'd':
			ClearScreen();
			find_demand_function();
			break;
		}
		if (user_input == 'q')
		{
			break;
		}
	}

}

