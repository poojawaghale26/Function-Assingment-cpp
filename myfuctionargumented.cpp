#include<iostream>
using namespace std;
void myFunction(string,int);
int main()
{
	string name;
	int age;
	cout<<"\n Enter the name:";
	cin>>name;
	cout<<"\n Enter the age:";
	cin>>age;
	myFunction(name,age);
	return 0;
}
void myFunction(string name,int age)
{
	cout<<name<<" Refsnes. "<<age<<" years old.\n";
}
