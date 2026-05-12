#include <iostream>

// функция сложения:
int addition(int a, int b)
{
    return a + b;
}

// функция вычитания:
int subtraction(int a, int b)
{
    return a - b;
}

// функция умножения:
int multiplication(int a, int b)
{
    return a * b;
}

// функция деления:
int division(int a, int b, int* c)
{
    if (b == 0)
    {
        return -1;
    }
    *c = a / b;
    return 0;
}

// функция возведения в степень:
int power(int a, int b)
{
    int c = 1;
    for (int i = 0; i < b; ++i)
    {
        c = c * a;
    }
    return c;
}

// вывод в консоль:
void printResult(int a, int b, int c, char operation)
{
    std::cout << a << ' ' << operation << ' ' << b << " = " << c << '\n';
}


int main()
{
    int a = 2;
    int b = 2;
    int c = 0;
    int status = 0;

    // сложение:
    c = addition(a, b);
    printResult(a, b, c, '+');

    // вычитание:
    c = subtraction(a, b);
    printResult(a, b, c, '-');

    // умножение:
    c = multiplication(a, b);
    printResult(a, b, c, '*');

    // деление:
    status = division(a, b, &c);
    if (status == 0)
    {
        printResult(a, b, c, '/');
    }
    else if (status == -1)
    {
        std::cout << "Error! Division by zero\n";
    }
    else
    {
        std::cout << "Unknown error\n";
    }

    // возведение в степень:
    c = power(a, b);
    printResult(a, b, c, '^');
}
