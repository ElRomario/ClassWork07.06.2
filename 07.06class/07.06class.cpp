
#include "vector2D.h"
#include <iostream>
using namespace std;
int main()
{
	Vector2D a{ 1, 2 };
	Vector2D b{ 3, 4 };

	cout << (a + b).getX() << endl;

	cout << a;

	cout << a + b;
	cout << "Enter x y:";
	cin >> a;

	cout << a;
}

