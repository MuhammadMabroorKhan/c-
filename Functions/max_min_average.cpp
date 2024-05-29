// Find SUm,average, minimum,maximum using functions and display by calling functions in main
#include <iostream>
using namespace std;
void input(int a[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << "Enter a Number " << i << " => ";
        cin >> a[i];
    }
}
void display(int a[], int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int minimum(int a[], int size)
{
    int minimum = a[1];
    for (int i = 1; i <= size; i++)
    {
        if (minimum > a[i])
            minimum = a[i];
    }
    return minimum;
}
int maximum(int a[], int size)
{
    int maximum = a[1];
    for (int i = 1; i <= size; i++)
    {
        if (maximum < a[i])
            maximum = a[i];
    }
    return maximum;
}
int sum(int a[], int size)
{
    int sum = 0;
    for (int i = 1; i <= size; i++)
    {
        sum += a[i];
    }
    return sum;
}
float aver(int a[], int size)
{
    int su = sum(a, size);
    return ((float)su / size);
}

int main()
{
    int s1 = 0;
    cout << "Enter Size of Array => ";
    cin >> s1;
    int arr[s1];
    input(arr, s1);
    cout<<endl;
    cout<<"Display => ";
    display(arr, s1);
    cout << "Minimum is => " << minimum(arr, s1) << endl;
    cout << "Maximum is => " << maximum(arr, s1) << endl;
    cout << "Sum is => " << sum(arr, s1) << endl;
    cout << "Average is => " << aver(arr, s1) << endl;
    system("pause");
    return 0;
}