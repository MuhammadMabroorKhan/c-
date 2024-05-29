#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    for (int j = n; j >= 1; j--)
    {
        for (int k = 6; k > j; k--)
        {
            if (k > 0)
                cout << k << " ";
        }
        cout << endl;
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 6; i >= j; i--)
        {
            if (i > 0)
                cout << i << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}