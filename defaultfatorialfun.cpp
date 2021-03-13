#include<iostream>
using namespace std;
void factorial()
{
	int no,i,fact=1;
	cout<<"\n Enter the number:";
	cin>>no;
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"\n The factorial of "<<no<<" is "<<fact;
}
int main()
{
	factorial();
	return 0;
}
