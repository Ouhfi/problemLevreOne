#include <iostream>

using namespace std;

struct  strTaskDuration{
int days;
int hours;
int minutes;
int seconds;

}

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
strTaskDuration ReadTaskDuration(string message)
{ 
	strTaskDuration TaskDuration;

	TaskDuration.D = ReadPositiveNumber("pleas enter Number Of days");
	TaskDuration.H = ReadPositiveNumber("pleas enter Number Of hours");
	TaskDuration.M = ReadPositiveNumber("pleas enter Number Of minutes");
 	TaskDuration.S = ReadPositiveNumber("pleas enter Number Of seconds");

	return TaskDuration;
}

int strTaskDurationInSeconds(strTaskDuration TaskDuration)
{
	TaskDuration.days * 24 * 60 * 60;
	TaskDuration.hours * 60 *60 ;
	TaskDuration.minutes 

}

int main()
{
 ReadTaskDuration("go");
}

