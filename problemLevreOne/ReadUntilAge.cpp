#include <iostream>

using namespace std; 

int	ReadAge()
{
	int age;

	cout << "please enter your age : \n";
	cin >> age;

	return age;
}

bool validatNumberInRange(int Number, int Form, int To)
{
	return (Number >= Form && Number <= To);
}

int ReadUnitlAgeBetween(int From, int To)
{
	int age = 0;
	do {
		age = ReadAge();
	}while (!validatNumberInRange(age , From , To));

			return age;
	
}

void PrintResult(int age)
{
	if(validatNumberInRange(age , 18 ,45)) 
	cout << "ins valid " << age << endl; 

	else 
	cout << "is invalid " << age << endl ; 
}

int main()
{
	PrintResult(ReadUnitlAgeBetween(18, 45));
}




