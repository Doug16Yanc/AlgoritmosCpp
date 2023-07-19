#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
    int N;
    int first;
    int second;
    int third;

    cout << " N " << setw(21) << " 10*N " << setw(21) << " 100*N " << setw(21) << " 1000*N " << endl;
    cout << fixed << setprecision(2);

    for ( N = 1; N <= 10; N++)
    {
        first = N*10;
        second = N*100;
        third = N*1000;
        
         cout << setw(4) << N << setw(21) << first << setw(21) << second << setw(21) << third << setw(21) << endl;
    }
    return 0; 
}