#include <iostream>
#include <string>

using namespace std;

int ReadAge()
{
	int Age;

	cout << "please enter your age : \n";
	cin >> Age;

	return Age;
}

bool validateNumberInRange(int Number, int From, int To)
{

	return (Number >=From && Number <= To);
}

void PrintResult(int age)
{
	if(validateNumberInRange(age, 18, 45))
		cout << age << " is a valid age \n";
	else
		cout << age << " is a invalid age \n";

}

int main()
{
	PrintResult(ReadAge());
}
