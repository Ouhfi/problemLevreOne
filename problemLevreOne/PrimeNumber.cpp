#include <iostream>

using namespace std;

enum { Prime  = 1, NotPrime = 2 }


int ReadNumber(string messages)
{
    int Number;

    do
    {
        cout << messages << endl;
        cin >> Number ;

    } while (Number > 0);
    
