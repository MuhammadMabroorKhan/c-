#include <iostream>
using namespace std;
struct student
{
    char name[20];
    char semister[20];
    char degree[20];
    char address[20];
    int cgpa;
};

void realstudent(student s[], int siz)
{
    for (int i = 0; i < siz; i++)
    {
        system("cls");
        cout << "\nEnter Name ";
        cin >> s[i].name;
        cout << "\nEnter Semister  ";
        cin >> s[i].semister;
        cout << "\nEnter Degree  ";
        cin >> s[i].degree;
        cout << "\nEnter Address  ";
        cin >> s[i].address;
        cout << "\nEnter CGPA  ";
        cin >> s[i].cgpa;
        cout << endl;
    }
};

void display(student s[], int siz)
{
    for (int i = 0; i < siz; i++)
    {
        cout << "\n Name   " << s[i].name;
        cout << "\n Semister  " << s[i].semister;
        cout << "\n Degree  " << s[i].degree;
        cout << "\n Address  " << s[i].address;
        cout << "\n CGPA  " << s[i].cgpa;
        cout << endl;
    }
};

void failed(student s[], int siz)
{

    for (int i = 0; i < siz; i++)
    {
        if (s[i].cgpa <= 2.5)
        {
            cout << "\n Name   " << s[i].name;
            cout << "\n Semister  " << s[i].semister;
            cout << "\n Degree  " << s[i].degree;
            cout << "\n Address  " << s[i].address;
            cout << "\n CGPA  " << s[i].cgpa;
            cout << endl;
        }
    }
};

int main()
{
    student s_data[5];
    int choice;
    int siz;
    do
    {

        cout << "Press 1 to Input Data " << endl;
        cout << "Press 2 To Display Data " << endl;
        cout << "Press 3 to Check Failed Student data " << endl;
        cout << "Press 4 to Exit " << endl;
        cin >> choice;
        if (choice == 1)
        {

            cout << "Enter How much data you want to save ";
            cin >> siz;
            realstudent(s_data, siz);
        }
        else if (choice == 2)
            display(s_data, siz);
        else if (choice == 3)
            failed(s_data, siz);
        else
            cout << "Invalid Input " << endl;
    } while (choice == 1 || choice == 2 || choice == 3);

    system("pause");
    return 0;
}