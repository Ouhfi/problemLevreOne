#include <iostream>

using namespace std;

float ReadPositiveNumber(string message )
{
	float Number;
do {

		cout << message << endl;
		cin >> Number ;
	}
	while(Number <= 0);
	

	return Number;
}
float CalculateRemainder (float TotalBill, float TotalCashPaid)
{
	
	return  TotalCashPaid - TotalBill  ;
}	
void printResult(float T)
{
	
 	cout << "---------------------------------"<< endl ;
	cout << " Remainder : " << T << endl;

}

int main ()
{
	float TotalBill  = ReadPositiveNumber("pleas entre TotalBill : ");
	float TotalCashPaid = ReadPositiveNumber("pleas enter TotalCashPaid : ");

	printResult(CalculateRemainder(TotalBill, TotalCashPaid));
}
