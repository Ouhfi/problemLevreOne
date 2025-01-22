#include <iostream>
#include <cmath>

using namespace std;

float ReadArea()
{
    float D;

    cout << "Entre D :" << endl;
    cin >> D;

    return D;
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.14;

    return  (PI * pow(D, 2)) / 4;
}

void PrintResult(float Area)
{
    cout << "circle Area by diameter is :" << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadArea()));
}