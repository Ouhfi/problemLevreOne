#include <iostream>
#include <cmath>

using namespace std;

void readNumber(float &R)
{
    cout << "Please enter R: ";
    cin >> R;
}

float calculateCircleArea(float R)
{
    const float P = 3.14;
    return pow(R, 2) * P;
}

void printResult(float area)
{
    cout << "Result is: " << area << endl;
}

int main()
{
    float R;
    readNumber(R);
    printResult(calculateCircleArea(R));
}
