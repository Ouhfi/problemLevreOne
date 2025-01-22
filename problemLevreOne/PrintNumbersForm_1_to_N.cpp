#include <iostream>
using namespace std;

int readNumber()
{
    int Number;

    cout << "pleas enter number : \n";
    cin >> Number;

    cout << "********************************\n";

    return Number;

}
void printRangeFrom1To_N_UsingForLoop(int n)
{
    for (int i = 0; i < n ; i++)
    {
        cout << i << endl;
    }
    
}
void printRangeFrom1To_N_UsingDoWhile(int num)
{
    int counter= 0;
    cout << counter<< endl;

    do
    {
        a++;
        cout << a << endl;
        

    } while (a < num);
            
}

void printRangeFrom1To_N_usingWhile(int Num)

{
    int counter = 0;

    while (counter< Num)
    {
        cout << counter << endl;

        a++;
    }
    
} 

int main()
{
   // printRangeFrom1To_N_usingWhile(readNumber());
    // printRangeFrom1To_N_UsingDoWhile(readNumber());
    printRangeFrom1To_N_UsingForLoop(readNumber());
}