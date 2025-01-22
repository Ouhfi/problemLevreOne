#include <iostream>

using namespace std;

int ReadPositiveNumber(string messages)
{
    int fac;
    
    do
    {

    cin >> fac;

    } while (fac < 0);
    
    return fac;
}

int factorial(int fac)
{
    int F = 1;
    
    for (int i = fac; i >= 1; i--)
    {
        F = F * i;
    }

    return F;
}

int main()
{
    int F = factorial(ReadPositiveNumber( "Please enter a positive number: "));
    cout << "Factorial is: " << F << endl;
}
