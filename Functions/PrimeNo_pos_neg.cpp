#include <iostream>
using namespace std;
void even_odd(int x)
{

	if (x % 2 != 0)
		cout << "Odd " << endl;
	else
		cout << "Even " << endl;
}
void pos_neg(int x)
{
	if (x >= 0)
		cout << "Positive " << endl;
	else
		cout << "Negative " << endl;
}
void prime(int n)
{

	int i;
	bool is_prime = true;

	// 0 and 1 are not prime numbers
	if (n == 0 || n == 1)
	{
		is_prime = false;
	}

	else if (n > 0)
	{
		// loop to check if n is prime
		for (i = 2; i <= n / 2; ++i)
		{
			if (n % i == 0)
			{
				is_prime = false;
				break;
			}
		}
	}
	else if (n < 0)
	{
		is_prime = false;
	}

	if (is_prime)
		cout << n << " is a prime number " << endl;
	else
		cout << n << " is not a prime number " << endl;
}
int main()
{
	int x;
	cout << "Enter Numeric Value => ";
	cin >> x;
	even_odd(x);
	pos_neg(x);
	prime(x);
	system("pause");
	return 0;
}