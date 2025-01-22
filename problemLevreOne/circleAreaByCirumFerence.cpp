#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumFerence()
{
    float L;

    cout << "entre circum ference :" << endl;
    cin >> L;
    
    return L;
}
    
float circleAreaByCircumFerence(float l)
{
    const float PI = 3.14;

    return pow(l,2) * 1 / (4 * PI );

}
void printResult(float Area)
{
    cout << "circle Area By Circum Ference is :" << Area << endl;

}

int main()
{
    printResult(circleAreaByCircumFerence(ReadCircumFerence())); 
}

