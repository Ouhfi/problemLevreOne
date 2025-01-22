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

float HoursToDays(float hours)
{
   return hours / 24;       // day
}

float HoursToWeeks(float hours)
{
    return HoursToDays(hours) / 7;      // weeks
}

 /*float DaysToWeek(float day)
 {
    return day * 7;       // weeks
 } */

 int main()
 {
    float hours = ReadPositiveNumbers("please number :");
    float day = HoursToDays(hours);
    float weeks = HoursToWeeks(hours);

    cout  <<  "hours is : " << hours << endl;

    cout << " -------------------------------- " << endl; 
    cout  << " hours to day :\n " << day << endl;
    cout << " hours to week : \n" << weeks << endl;
    

 }