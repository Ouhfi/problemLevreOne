#include <iostream>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
    float A;

    cout << "entre square side :" << endl;
    cin >> A;

    return A;

}

float circleAreaInscribedInSquare(float A )
{
    const float PI = 3.14;

    return (PI *  pow(A, 2)) / 4;
}

void PrintResult(float area)
{
    cout << "circleAreaInscribedInSquare is :" << area << endl;

}

int main()
{
    PrintResult(circleAreaInscribedInSquare(ReadSquareSide()));
}