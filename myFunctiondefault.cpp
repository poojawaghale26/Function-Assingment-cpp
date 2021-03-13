#include<iostream>
using namespace std;
void myFunction()
{
	string name;
	int age;
	cout<<"\n Enter the name:";
	cin>>name;
	cout<<"\n Enter the age:";
	cin>>age;
	cout<<name<<" Refsnes."<<age<<" years old.\n";
}
int main()
{
	myFunction();
	return 0;
}
