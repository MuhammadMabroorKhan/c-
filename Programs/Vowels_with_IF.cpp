#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter A Character => ";
    cin >> x;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        cout << "Vowel " << endl;
    else
        cout << "Not Vowel" << endl;
    system("pause");
    return 0;
}