#include <iostream>
using namespace std;
int main()
{
	int a[10], counteven = 0, countodd = 0, addeven = 0, addodd = 0;

	cout << "Enter 10 numbers " << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Number " << i << " => ";
		cin >> a[i];

		if (a[i] % 2 == 0)
		{
			addeven = addeven + a[i];
			counteven++;
		}
		else
		{
			addodd = addodd + a[i];
			countodd++;
		}
	}

	cout << endl;
	cout << "Count Of Even Numbers => " << counteven << endl;
	cout << "Count of Odd Numbers => " << countodd << endl;
	cout << endl;
	cout << "Sum Of Even Numbers => " << addeven << endl;
	cout << "Sum of Odd Numbers => " << addodd << endl;
	cout << endl;
	cout << "Average of Even Numbers => " << addeven / counteven << endl;
	cout << "Average of Odd Numbers => " << addodd / countodd << endl;

	system("pause");
	return 0;
}