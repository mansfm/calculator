#include <iostream>

//сложение:
int addition(int a, int b)
{
    return a + b;
}

//вычитание:
int subtraction(int a, int b)
{
    return a - b;
}

//умножение:
int multiplication(int a, int b)
{
    return a * b;
}

//деление:
int division(int a, int b)
{
    return a / b;
}

//возведение в степень:
int power(int a, int b)
{
    int c = 1;
    for (int i = 0; i < b; ++i)
    {
        c = c * a;
    }
    return c;
}

//вывод в консоль:
void printResult(int a, int b, int c, char operation)
{
    std::cout << a << ' ' << operation << ' ' << b << " = " << c << '\n';
}


int main()
{
    int a = 2;
    int b = 2;
    int c = 0;

    // сложение:
    c = addition(a, b);
    printResult(a, b, c, '+');

    // вычитание:
    c = subtraction(a, b);
    printResult(a, b, c, '-');

    //умножение:
    c = multiplication(a, b);
    printResult(a, b, c, '*');

    // деление:
    if (b != 0)
    {
        c = division(a, b);
        printResult(a, b, c, '/');
    }
    else
    {
        std::cout << "Error! Division by zero\n";
    }

    // возведение в степень:
    c = power(a, b);
    printResult(a, b, c, '^');
}
