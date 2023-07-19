#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i;
    int x;
    int y;
    int power;

    i = 1;
    power = 1;

    cout << "Enter base as an integer:";
    cin >> x;

    cout << "Enter expoent as an integer:";
    cin >> y;

    while ( i <= y)
    {
        power *= x;
        i++;
    }
    cout << power << endl;
    return 0;
}