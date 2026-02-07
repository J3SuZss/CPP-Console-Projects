// FindDividers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void findDividers(int number)
{ 
	cout << " The dividers of " << number << " are: ";
	for(int i=2;i<=number/2; i++)
	{
		if(number % i == 0)
		{
			cout << i << " ";
		}
	}
}
int main()
{
	int number;
	cout << "Enter a number: ";	
	cin >> number;
	findDividers(number);

}

