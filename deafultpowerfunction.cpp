#include<iostream>
using namespace std;
void Power()
{
	int base,index,i,pow=1;
	cout<<"\n Enter the base:";
	cin>>base;
	cout<<"\n Enter the index:";
	cin>>index;
	for(i=1;i<=index;i++)
	{
		pow=pow*base;
	}
	cout<<base<<" raise to "<<index<<" is "<<pow;
}
int main()
{
	Power();
	return 0;
}
