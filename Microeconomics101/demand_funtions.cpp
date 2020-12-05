#include "demand_funtions.h"


void find_demand_function()
{
	char user_input;
	while (true)
	{
		std::cout << "Choose type of utility function.\n" << "List of options:\n" << "d - Cobbe-Douglas function\n" << "c - perfectly complementary\n" << "s - perfectly substitutable\n" << "q - go back to the main menu\n";
		std::cin >> user_input;
		switch (user_input)
		{
		case 'd':
			ClearScreen();
			find_demand_function_cd();
			break;
		case 'c':
			ClearScreen();
			find_demand_function_c();
			break;
		case 's':
			ClearScreen();
			find_demand_function_s();
			break;
		}
		std::cout << std::endl;
		if (user_input == 'q')
		{
			ClearScreen();
			break;
		}
			
	}
}

void find_demand_function_cd()
{
	double pwX, pwY, pX, pY, m;
	std::cout << "You chose Cobbe-Douglas function.\n" << "Please provide power of X\n";
	std::cin >> pwX;
	std::cout << "Please provide power of Y\n";
	std::cin >> pwY;
	std::cout << "Please provide price of X\n";
	std::cin >> pX;
	std::cout << "Please provide price of Y\n";
	std::cin >> pY;
	std::cout << "Please provide budget\n";
	std::cin >> m;
	std::cout << "Demand for X: " << (pwX / (pwX + pwY)) * m / pX << std::endl;
	std::cout << "Demand for Y: " << (pwY / (pwX + pwY)) * m / pY << std::endl;
}

void find_demand_function_c()
{
	double a, b, pX, pY, m;
	std::cout << "You chose Cobbe-Douglas function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "Please provide price of X\n";
	std::cin >> pX;
	std::cout << "Please provide price of Y\n";
	std::cin >> pY;
	std::cout << "Please provide budget\n";
	std::cin >> m;
	std::cout << "Demand for X: " << m / (pX + (a * pY / b)) << std::endl;
	std::cout << "Demand for Y: " << m / (pY + (b * pX / a)) << std::endl;
}

void find_demand_function_s()
{
	double a, b, pX, pY, m;
	std::cout << "You chose Cobbe-Douglas function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "Please provide price of X\n";
	std::cin >> pX;
	std::cout << "Please provide price of Y\n";
	std::cin >> pY;
	std::cout << "Please provide budget\n";
	std::cin >> m;
	if ((a / pX) > (b / pY))
	{
		std::cout << "Demand for X: " << m / pX << std::endl;
		std::cout << "Demand for Y: 0" << std::endl;
	}
	else if ((a / pX) < (b / pY))
	{
		std::cout << "Demand for X: 0" << std::endl;
		std::cout << "Demand for Y: 0" << m / pY << std::endl;
	}
	else
	{
		std::cout << "Any point that belong to this line is an optimal choice: " << pX << " * X + " << pY << " * Y = " << m;
	}

}
