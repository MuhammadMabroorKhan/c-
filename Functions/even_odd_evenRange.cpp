#include <iostream>
using namespace std;
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
};
int findsquare(int n)
{
    return n * n;
};
int main()
{
    int choice;
    do
    {
        cout << endl;
        cout << "Enter 1 to check even Odd " << endl;
        cout << "Enter 2 to display even number b/w range " << endl;
        cout << "Enter 3 to display value if value is even calculate its square " << endl;
        cout << "Enter 4 to Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            int value;
            cout << "Enter a Number " << endl;
            cin >> value;
            if (isEven(value))
                cout << "Value is Even " << endl;
            else
                cout << "Value is Odd " << endl;
        }
        else if (choice == 2)
        {
            int lower_limit, upper_limit;
            cout << "Enter Lower and Upper Limit " << endl;
            cin >> lower_limit >> upper_limit;
            for (int i = lower_limit; i <= upper_limit; i++)
            {
                if (isEven(i))
                    cout << i << "  ";
            }
        }
        else if (choice == 3)
        {
            int n;
            cout << "Enter A Number ";
            cin >> n;
            if (isEven(n))
            {
                int square = findsquare(n);
                cout << "Square : " << square << endl;
            }
        }
    } while (choice == 1 || choice == 2 || choice == 3);

    system("pause");
    return 0;
}