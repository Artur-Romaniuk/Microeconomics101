#include "income_offer_curve.h"

void find_income_offer_curve()
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
			find_income_offer_curve();
			break;
		case 'c':
			ClearScreen();
			find_income_offer_curve_c();
			break;
		case 's':
			ClearScreen();
			find_income_offer_curve_s();
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

void find_income_offer_curve_cd()
{
	double pwX, pwY;
	std::cout << "You chose Cobbe-Douglas function.\n" << "Please provide power of X\n";
	std::cin >> pwX;
	std::cout << "Please provide power of Y\n";
	std::cin >> pwY;
	std::cout << "Income offer curve: Y = " << pwY / pwX << " * X * (pX/pY)" << std::endl;
}
void find_income_offer_curve_c()
{
	double a, b;
	std::cout << "You chose perfectly complementary function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "Income offer curve: " << "Y = " << a / b << "X" << std::endl;
}
void find_income_offer_curve_s()
{
	double a, b;
	std::cout << "You chose perfectly suplementary function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "if (("<<a<<" / pX) > ("<<b<<" / pY))\n";
	std::cout << "Income offer curve: X = " << "(m/pX)" << std::endl;
	std::cout << "Income offer curve: Y = 0\n" << std::endl;
	std::cout << "if (("<<a<<" / pX) < ("<<b<<" / pY))\n";
	std::cout << "Income offer curve: X = 0" << std::endl;
	std::cout << "Income offer curve: Y = " << "(m/pX)\n" << std::endl;
	std::cout << "if (("<<a<<" / pX) = ("<<b<<" / pY))\n";
	std::cout << "Income offer curve: X = (m - pY * Y)/pX" << std::endl;
	std::cout << "Income offer curve: Y = (m - pX * X)/pY\n" << std::endl;
}