

#include <iostream>
using namespace std;
bool IsPrime(int number)
{
	bool isPrime = true;
	for(int i=2;i<=number/2;i++)
	{
		
		if(number % i != 0)
		{
			continue;
		}
		else
		{
			isPrime = false;
			break;			
		}
	}
	return isPrime;
}

int main()
{
	int number;
	bool IsProgramRunning = true;
	cout << "Enter a positive integer: ";
	cin >> number;
	while (IsProgramRunning) 
	{
		
		if (number <= 0)
		{
			cout << "Number cant be negative or zero. Please enter a positive integer: ";
			cin >> number;
		}
		else
			if(IsPrime(number))
			{
				cout << number << " is a prime number." << endl;
				break;
			}
			else
			{
				cout << number << " is not a prime number." << endl;
				break;
			}
		


	}

}

