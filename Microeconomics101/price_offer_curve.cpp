#include "price_offer_curve.h"

void find_price_offer_curve()
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
			find_price_offer_curve_cd();
			break;
		case 'c':
			ClearScreen();
			find_price_offer_curve_c();
			break;
		case 's':
			ClearScreen();
			find_price_offer_curve_s();
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

void find_price_offer_curve_cd()
{
	double pwX, pwY;
	std::cout << "You chose Cobbe-Douglas function.\n" << "Please provide power of X\n";
	std::cin >> pwX;
	std::cout << "Please provide power of Y\n";
	std::cin >> pwY;
	std::cout << "Price offer curve: X = " << (pwX / (pwX + pwY)) << " * (m/pX)" << std::endl;
	std::cout << "Price offer curve: Y = " << (pwY / (pwX + pwY))<<" * (m/pY)"<< std::endl;
}
void find_price_offer_curve_c()
{
	double a, b;
	std::cout << "You chose perfectly complementary function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "Price offer curve: " << "X = " << b / a << "Y" << std::endl;
	std::cout << "Price offer curve: " << "Y = "<<a/b<<"X" <<std::endl;
}
void find_price_offer_curve_s()
{
	double a, b;
	std::cout << "You chose perfectly suplementary function.\n" << "Please provide factor at X\n";
	std::cin >> a;
	std::cout << "Please provide factor at Y\n";
	std::cin >> b;
	std::cout << "if (("<<a<<" / pX) > ("<<b<<" / pY))\n";
	std::cout << "Price offer curve: X = " << "(m/pX)" << std::endl;
	std::cout << "Price offer curve: Y = 0\n" << std::endl;
	std::cout << "if (("<<a<<" / pX) < ("<<b<<" / pY))\n";
	std::cout << "Price offer curve: X = 0"<< std::endl;
	std::cout << "Price offer curve: Y = " << "(m/pX)\n" << std::endl;
	std::cout << "if (("<<a<<" / pX) = ("<<b<<" / pY))\n";
	std::cout << "Price offer curve: X = (m - pY * Y)/pX" << std::endl;
	std::cout << "Price offer curve: Y = (m - pX * X)/pY\n" << std::endl;
}
