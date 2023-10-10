// Lab_04_4.cpp
// Чернієнко Максима
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 25

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double F, R, x, xk, dx;
	cout << "xp = "; cin >> x;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "F" << "      |" << endl;
	cout << "---------------------------" << endl;
	for (x; x <= xk; x += dx)
	{
		if (x <= -2)
			F = -1 + (x + 4);
		else
			if (x > -2 && x <= 4)
				F = 1 + (-R - 1) / 6 * (x + 2);
			else
				if (x > 8 - R && x <= 8 + R)
					F = sqrt(pow(R, 2) - pow(x, 2) + 16 * x - 64) - R;
				else
					F = -R;
		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << F
			<< "   |" << endl;
	}
}