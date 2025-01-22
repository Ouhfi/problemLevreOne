#include <iostream>

using namespace std;

enum enOddOrEven{Odd = 1, Even = 2 , Everyone = 3};

void Menu ()
{
    cout << "enter what you want to collect : \n";
    cout << "enter one  = 1  ===> sum Odd : \n";
    cout << "enter tow  = 2 ===> sum even : \n";
    cout << "enter three = 3 ===> sum  Everyone : \n";
}

int ReadChoices( )
{
    int choice;

    while (choice < 1 || choice > 3) // Loop while the choice is out of range
    {
        cout << "Invalid choice. Try again." << endl;
        Menu();  // Show the menu again
        cin >> choice; // Re-prompt the user for input
    }
    
    return choice;
}
enOddOrEven CheckChoice(int choice)
{
    if(choice == 1)
    return enOddOrEven::Odd;

    else if(choice == 2)
    return enOddOrEven::Even;

    else if(choice == 3)
    return enOddOrEven::Everyone;
}


int readNumber()
{
    int Number;

    cout << "pleas entre Number : \n";
    cin >> Number;

    
    return Number;

}

int SumEveryone(int Number)
{
    int sum = 0;
    for (int  i = 1; i <= Number; i++)
    {
        sum += i;
    }
    
    return sum;
}


enOddOrEven CheckOddOrEven(int Number)
{
    if(Number % 2 != 0 )
    return enOddOrEven::Odd;
    
    else 
    return enOddOrEven::Even;
        
}

/*int SumOddNumbersFrom_1ToN_UsingWhile(int N)
{
    int sum = 0;

    int i = 1;

    while (i <= N)
    {

        if(CheckOddOrEven(i) == enOddOrEven::Odd)
        {
            sum += i;
         
        }  
         i++;
    }

    return sum;
    
}*/

int SumOddNumbersFrom_1ToN_UsingFor(int n)
{
    int Sum = 0;

    cout << "sum odd number using for statement : \n";

    for (int  i = 1; i <= n; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
        {
            Sum += i;
        }
    }
    return Sum;

}
int SumEvenNumbersFrom_1ToN_UsingFor(int n)
{
    int Sum = 0;

    cout << "sum even number using for statement : \n";

    for (int  i = 1; i <= n; i++)
    {
        if (CheckOddOrEven(i) == enOddOrEven::Even)
        {
            Sum += i;
        }
    }
    return Sum;

}

int ApplyTheChoices(int Number, int choice)
{
    if (choice == enOddOrEven::Even)
            return SumEvenNumbersFrom_1ToN_UsingFor(Number);
    

    else if (choice == enOddOrEven::Odd)
            return SumOddNumbersFrom_1ToN_UsingFor(Number);
    

    else if (choice == enOddOrEven::Everyone)
            return SumEveryone(Number);
    
}
    
int main()
{


 int N = readNumber();

 int choice = ReadChoices();
 cout << ApplyTheChoices(N,choice) << endl;

 

}
