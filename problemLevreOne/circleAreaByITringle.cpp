#include  <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &A, float &B)
{
    cout << " entre A :\n";
    cin >> A;

    cout << " entre B : \n";
    cin >> B; 
}

float circleAreaITriangle(float A, float B)
{
    const float PI = 3.14;

    return ((PI * pow(B,2)) / 4 ) * ((2 * A - B) / (2 * A + B));
}

void printResult(float area)
{
    cout  << "circle area triangle is :" << area << endl;

}

int main()
{
    float a, b;

    ReadTriangleData(a, b);
    printResult(circleAreaITriangle(a, b));
}