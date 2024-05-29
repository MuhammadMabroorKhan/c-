#include <iostream>
using namespace std;
int main()
{
repeat:
    cout << endl
         << "     ***Character to its ASCII***  \n";
    char ch;
    cout << "     Enter a cahracter => ";
    cin >> ch;
    cout << "     Ascii value of " << ch << " IS => " << int(ch) << endl;
    cout << endl
         << "     ************************" << endl;
    cout << endl
         << "     ***ASCII TO its CHARACTER*** \n";
    int n;
    cout << "     Enter ASCII value => ";
    cin >> n;
    cout << "     Charac of " << n << " Is => " << char(n) << endl
         << endl;

    cout << "     PRESS Y/y for REPEAT and any other key to EXIT => ";
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y')
    {
        goto repeat;
    }
    system("pause");
    return 0;
}