#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int x;
    int product;

    x = 1;
    product = 1;

    while ( x <= 15)
    {
        product = product*x;
        x = x + 2;
    }
    
    cout << "The product is:" << product << endl;
    return 0;
}