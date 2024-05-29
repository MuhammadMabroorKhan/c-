#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter a Number =>";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
    system("pause");
    return 0;
}
