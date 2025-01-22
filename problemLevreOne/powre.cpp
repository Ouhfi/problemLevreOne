#include <iostream>

using namespace std;

int  readNumber(string messages)
{
    int Number;

    do
    {
        cin >> Number;

    } while(Number < 0);
    
    return Number;
    
}

 int PowerNumber(int N)
 {
    int power = 0;

    for (int i = 1; i <= N; i++)
    {
        power = N * i ;
        
    }
    return power;
 }

 

int main()
{
    
    cout << PowerNumber(readNumber("enter number :")) << endl;

}