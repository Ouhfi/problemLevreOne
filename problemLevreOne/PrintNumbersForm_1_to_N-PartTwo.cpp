#include <iostream>

using namespace std;

int readNumber()
{
    int number;

    cout << "pleas enter number \n";
    cin >> number;

    return number;

}

void printRangeFrom1To_N_while(int num)
{
    int counter = 0;
    cout << "Range printed using while \n";

    while (counter < num)
    {
        
        cout << num << endl;
        num--;
    }
    
}
void printRangeFrom1To_N_DoWhile(int num)
{
    int counter = 0;
    cout << "Range printed using do while \n";
    do
    {
        
        cout << num << endl;
        num--;
    } while (counter < num);
    
}
void printRangeFrom1To_N_For(int num)
{
    cout << "Range printed using for \n";
    for (int i = 0; i < num; num--)
    {
        cout << num << endl;
    }
    
}

int main()
{
    int n = readNumber();

    printRangeFrom1To_N_For(n);
    printRangeFrom1To_N_DoWhile(n);
    printRangeFrom1To_N_DoWhile(n);
}