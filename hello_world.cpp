#include <iostream>
#include <cmath>
#include "det.h"
#include "first_root.h"
#include "second_root.h"


using namespace std;


int main(int argc, char** argv)
{
	cout << "Hello, World!" << endl;
	int a = 20;
	int b = 3;
	cout << "Result: " << static_cast<double> (a) / b << endl;


	{ // Область видимости - за ее пределами определенные внутри нее переменные не видны  
		int k = 10;
		int i;
		if (k > 10) {
			i = 0;
		}
		else {
			i = -1;
		}
		// int i = (k > 10) ? 0 : -1;  
		//Дренарный оператор - замена констукции if; проверяется выражение до ? и потом ставится одно из значений после него  

	}

	{
		double a, b, c;

		cin >> a >> b >> c;

		if (det(a, b, c) >= 0) {
			cout << first_root(a,b,c) << " " << second_root(a,b,c) << endl;
		}
		else {
			cout << "No real roots" << endl;
		}

	}


	return 0;
}

