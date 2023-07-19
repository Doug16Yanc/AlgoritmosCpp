#include <iostream>
using std::cout;
using std::cin;
using std::endl;

unsigned long fibonacci (unsigned long);

int main()
{
    for (int contador = 0; contador <= 10; contador++)
        cout << " Fibonacci("<<contador<<") = " << fibonacci(contador) << endl;

        cout << " Fibonacci(20) = " << fibonacci(20) << endl;
        cout << "Fibonacci(30) = " << fibonacci(30) << endl;
        cout << "Fibonacci(40) = " << fibonacci(40) << endl;
        return 0;
}
unsigned long fibonacci(unsigned long number)
{
    if (( number == 0) || ( number == 1))
        return number;
    else 
        return fibonacci(number-1) + fibonacci(number-2);
}