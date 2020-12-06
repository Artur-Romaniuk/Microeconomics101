#include "engel_curve.h"

using namespace std;

void find_engel_curve()
{
	char user_input;
	while (true)
	{
		cout << "Choose type of utility function.\n" << "List of options:\n" << "d - Cobbe-Douglas function\n" << "c - perfectly complementary\n" << "s - perfectly substitutable\n" << "q - go back to the main menu\n";
		cin >> user_input;
		switch (user_input)
		{
		case 'd':
			ClearScreen();
			find_engel_curve_cd();
			break;
		case 'c':
			ClearScreen();
			find_engel_curve_c();
			break;
		case 's':
			ClearScreen();
			find_engel_curve_s();
			break;
		}
		cout << endl;
		if (user_input == 'q')
		{
			ClearScreen();
			break;
		}

	}
}
void find_engel_curve_cd()
{
	double pwX, pwY;
	cout << "You chose Cobbe-Douglas function.\n" << "Please provide power of X\n";
	cin >> pwX;
	cout << "Please provide power of Y\n";
	cin >> pwY;
	cout << "Engel curve: m = "<< (pwX+pwY)/pwX<<" * X * pX" << endl;

}
void find_engel_curve_c()
{
	double a, b;
	cout << "You chose perfectly complementary function.\n" << "Please provide factor at X\n";
	cin >> a;
	cout << "Please provide factor at Y\n";
	cin >> b;
	cout << "Engel curve: " << "m = (pX + " << a / b << " pY) * X" << endl;
}
void find_engel_curve_s()
{
	double a, b;
	cout << "You chose perfectly suplementary function.\n" << "Please provide factor at X\n";
	cin >> a;
	cout << "Please provide factor at Y\n";
	cin >> b;
	cout << "if ((" << a << " / pX) > (" << b << " / pY))\n";
	cout << "Engel curve: m = X * pX" << endl;
	cout << "if ((" << a << " / pX) < (" << b << " / pY))\n";
	cout << "Engel curve: m = Y * pY" << endl;
	cout << "if ((" << a << " / pX) = (" << b << " / pY))\n";
	cout << "Engel curve: m = X * pX + Y * pY" << endl;
}