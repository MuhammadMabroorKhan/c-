#include<iostream>
using namespace std;
struct person
{
char name[20];
int age;
char address[20];

};

int main()
{
	person p;
cout<<"Input Name =>";
cin>>p.name;
cout<<"Input age =>";
cin>>p.age;
cout<<"Input address =>";
cin>>p.address;

if(p.age < 20)
	cout<<"  Person is  Young "<<endl;
else if(p.age > 50)
	cout<<"   Person is Old   "<<endl;
else if(p.age >20 && p.age < 50)
	cout<<"   Person is Middle   "<<endl;
system ("pause");
return 0;
}