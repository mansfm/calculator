#include <iostream>

//Test
int main()
{
	int a;
       	a = 2;
       
       	int b;
       	b = 2;

	// сложение:
       	int c;
       	c = a + b;
	std::cout << a << " + " << b << " = " << c << '\n';

	// вычитание:
       	int d;
       	d = a - b;
	std::cout << a << " - " << b << " = " << d << '\n';

	//умножение:
       	int e;
       	e = a * b;
	std::cout << a << " * " << b << " = " << e << '\n';

	// деление:
       	int f;
       	if (b != 0)
       	{
		f = a / b;
       	}
       	else
       	{
       		std::cout << "Error\n";
       	}
       	std::cout << a << " / " << b << " = " << f << '\n';

       	// возведение в степень:
	int g = 1;
	for (int i = 0; i < b; ++i)
	{
		g = g * a;
	}
	std::cout << a << " ^ " << b << " = " << g << '\n';
}
