#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void FindPrimeDividers(long long number)
{
    if (number == 0)
    {
        cout << "0 cannot be factorized into prime divisors." << endl;
        return;
    }

    if (number < 0)
    {
        cout << "-1^1" << endl;
        number = -number;
    }

    if (number == 1)
    {
        cout << "1 has no prime divisors." << endl;
        return;
    }

    for (long long p = 2; p * p <= number; ++p)
    {
        if (number % p == 0)
        {
            int exponent = 0;
            while (number % p == 0)
            {
                ++exponent;
                number /= p;
            }
            cout << p << "^" << exponent << endl;
        }
    }

    if (number > 1)
    {
        cout << number << "^1" << endl;
    }
}

int main()
{
    long long number;
    cout << "Enter a number: ";
    if (!(cin >> number))
    {
        cerr << "Invalid input." << endl;
        return 1;
    }

    FindPrimeDividers(number);
    return 0;
}

