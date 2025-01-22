#include <iostream>

using  namespace std;

enum enOperationType { 
    Add = '+', subtract = '-', Multiply = '*', Divide = '/'

};

float ReadNumber(string messages)
{
    float Num;

    cout << messages ;
    cin >> Num;
   

    return Num;
    
}
enOperationType ReadOperationType()
{
    char OT ;
    cout  << "pleas enter operation < - > < + > < / > < * > : \n";
    cin >> OT;

    return (enOperationType) OT;
}

float Calculate(float Num1, float Num2 ,enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add:
        return Num1 + Num2;

        case enOperationType::subtract:
        return Num1 - Num2;

        case enOperationType::Multiply:
        return Num1 * Num2;

        default:  enOperationType::Divide;
        return Num1 / Num2;
            
    }
    



}

int main()
{
    float a = ReadNumber("enter pleas number :");
    float b = ReadNumber("enter pleas number :");

   enOperationType OpType = ReadOperationType();

    cout <<"result :"  << Calculate(a, b, OpType) << endl ;
}
