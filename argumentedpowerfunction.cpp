#include<iostream>
using namespace std;
void Power(int,int);
int main()
{
	int base,index;
	cout<<"\n Enter the base:";
	cin>>base;
	cout<<"\n Enter the index:";
	cin>>index;
	Power(base,index);
	return 0;
}
void Power(int base,int index)
{
	int pow=1,i;
	for(i=1;i<=index;i++)
	{
		pow=pow*base;
	}
	cout<<base<<" raise to "<<index<<"is "<<pow;
}
