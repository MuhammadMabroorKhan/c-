#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cout << "Enter a Numer => ";
    cin >> n;
REPEAT:
    if (n > 0)
    {
        fact = fact * n;
        n--;
        goto REPEAT;
    }
    cout << "Factorial => " << fact << "\n";
    system("pause");
    return 0;
}