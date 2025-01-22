#include  <iostream>
#include <cmath>

using namespace std;

void ReadTriangleData(float &A, float &B, float &C)
{
    cout << " entre A :\n";
    cin >> A;

    cout << " entre B : \n";
    cin >> B; 

    cout << "entre c" << endl;
    cin >> C;
}

float circleAreaATriangle(float A, float B, float C)
{
    const float PI = 3.14;
    
    float P;
    P =  (A + B + C ) / 2;
   
   float T;
  T = (A * B * C ) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

return PI * pow( T, 2); 


    
}

void printResult(float area)
{
    cout  << "circle area a triangle is :" << area << endl;

}

int main()
{
    float a, b, c;

    ReadTriangleData(a, b, c);
    printResult(circleAreaATriangle(a, b, c));
}
