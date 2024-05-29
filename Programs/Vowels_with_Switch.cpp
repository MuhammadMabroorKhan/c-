#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter a Character => ";
    cin >> x;
    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "Vowel " << endl;
        break;
    default:
        cout << "Not Vowel" << endl;
    }
    system("pause");
    return 0;
}