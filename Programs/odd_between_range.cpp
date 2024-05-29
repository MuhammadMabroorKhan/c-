#include <iostream>
using namespace std;
int main()
{
    int n, n2, r, i;
    cout << "Enter First Number => ";
    cin >> n;
    cout << "Enter Second Number => ";
    cin >> n2;
    cout << "Odd numbers between " << n << " and " << n2 << " are :" << endl;
    if (n < n2)
    {
        i = n;
        do
        {
            r = i % 2;
            if (r == 1)
                cout << "\n"
                     << i;
            i++;
        } while (i <= n2);
    }
    else
    {
        i = n;
        do
        {
            r = i % 2;
            if (r == 1)
                cout << "\n"
                     << i << endl;
            i--;
        } while (i >= n2);
    }
    cout << endl;
    system("pause");
    return 0;
}