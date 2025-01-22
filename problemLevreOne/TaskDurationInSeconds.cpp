#include <iostream>

using namespace std;

float ReadPositiveNumbers(string messages)
{ 
    float Number; 

    do
    {
        cout << messages << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
    
}

float DaysToSeconds(float Days)
{
    return (Days * 24 * 3600 );
}

float HoursToSeconds(float Hours)
{
    return (Hours * 3600 );
}

float MinutesToSeconds(float Minutes)
{
    return Minutes * 60 ;
}
int main ()
{
    float Days = ReadPositiveNumbers("Enter the number of working days :");
    float Hours = ReadPositiveNumbers("Enter the number of working hours :");
    float Minutes = ReadPositiveNumbers("Enter the number of working minutes :");
    float Seconds =ReadPositiveNumbers("Enter the number of working seconds :");

  Seconds = DaysToSeconds(Days)+HoursToSeconds(Hours)+MinutesToSeconds(Minutes);

   cout << "-----------------------------------" << endl; 
   cout << " seconds is : " << Seconds << " s" << endl;

}
    