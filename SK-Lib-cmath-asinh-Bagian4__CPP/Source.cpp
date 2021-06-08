// C++ program to demonstrate
// the asinh() function
#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	string x = "gfg";

	// Function call to calculate asinh(x) value
	double result = asinh(x);

	cout << "asinh(50.0) = " << result << " radians" << endl;
	cout << "asinh(50.0) = " << result * 180 / 3.141592 << " degrees" << endl;

	_getch();
	return 0;
}
