#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter C/c for Capital and S/s for Small Alphabets => ";
    cin >> ch;
    if (ch == 'C' || ch == 'c')
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            cout << ch << "  ";
        }
    else if (ch == 'S' || ch == 's')
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            cout << ch << "  ";
        }
    system("pause");
    return 0;
}