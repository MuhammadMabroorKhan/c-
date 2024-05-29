#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number => ";
    cin >> n;
    switch (n % 2 == 0)
    {
    case 1:
        cout << "Even " << endl;
        break;
    default:
        cout << "Odd" << endl;
        break;
    }
    system("pause");
    return 0;
}