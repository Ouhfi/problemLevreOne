#include <iostream>

using namespace std;

int  ReadNumber(string messages)
{
    int number;

    
        cout << messages << endl;
        cin >> number;
    
    return number;
    
}

int sumNumbers()
{
    int sum = 0 , num;
    

    while (1)
    {
        num = ReadNumber("enter number : ");
        sum += num;
        if(num == -99)
        {
            break;
        }
    }

    return sum + 99;
    

}

int main()
{
    cout << sumNumbers() << endl;

} 
