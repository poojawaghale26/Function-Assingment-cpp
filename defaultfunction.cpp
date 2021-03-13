#include<iostream>
using namespace std;
void Add()
{
	int a,b,sum;
	cout<<"\n Enter two numbers:";
	cin>>a>>b;
	sum=a+b;
	cout<<"\n Addition: "<<sum;
}
void Sub()
{
	int a,b,res;
	cout<<"\n Enter two numbers:";
	cin>>a>>b;
	res=a-b;
	cout<<"\n Substraction: "<<res;
}
int main()
{
	 Add();
	 Sub();
	return 0;
}
