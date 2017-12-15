#include <iostream>

void sum(double &first,double &second)
{
    std::cout << "=" << first + second << std::endl;
}

void minus(double &first,double &second)
{
    std::cout << "=" << first - second << std::endl;
}

void multiplication(double &first,double &second)
{
    std::cout << "=" << first * second << std::endl;
}

void del(double &first,double &second)
{
    if (second == 0)
        std::cout << "Error" << std::endl;
    else
        std::cout << "=" << first / second << std::endl;
}

void calculator(double &first,double &second, char &operation)
{
    std::cin >> first >> operation >> second;
    
    switch (operation)
    {
        case '-':
            minus(first, second);
            break;
        case '+':
            sum(first, second);
            break;
        case '*':
            multiplication(first, second);
            break;
        case '/':
            del(first, second);
            break;
        default:
            std::cout << "Error" << std::endl;
    }
}

int main()
{
    double first = 0;
    double second = 0;
    char operation;
    for (int i; i < 5; ++i)
        calculator(first, second, operation);
    return 0;
}
