#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, sum = 0;
    cout << "Enter 10 Numbers " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Number " << i << " => ";
        cin >> n;
        count++;
        sum = sum + n;
    }
    cout << endl;
    cout << "Sum => " << sum;
    cout << endl;
    cout << "Average => " << (float)sum / count << endl
         << endl;
    system("pause");
    return 0;
}