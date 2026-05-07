#include <iostream>

//Test
int main()
{
	int a = 2;
	int b = 2;
	int c = 0;

	// сложение:
	c = a + b;
	std::cout << a << " + " << b << " = " << c << '\n';

	// вычитание:
	c = a - b;
	std::cout << a << " - " << b << " = " << c << '\n';

	//умножение:
	c = a * b;
	std::cout << a << " * " << b << " = " << c << '\n';

	// деление:
	if (b != 0)
	{
		c = a / b;
		std::cout << a << " / " << b << " = " << c << '\n';
	}
	else
	{
		std::cout << "Error! Division by zero\n";
	}

	// возведение в степень:
	c = 1;
	for (int i = 0; i < b; ++i)
	{
		c = c * a;
	}
	std::cout << a << " ^ " << b << " = " << c << '\n';
}
