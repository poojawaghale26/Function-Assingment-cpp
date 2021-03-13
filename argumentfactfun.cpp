#include<iostream>
using namespace std;
void factorial(int);
int main()
{
	int no;
	cout<<"\n Enter the number:";
	cin>>no;
	factorial(no);
}
void factorial(int no)
{
	int i,fact=1;	
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
    cout<<"\n The factorial of "<<no<<" is "<<fact;	
}
