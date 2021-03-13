#include<iostream>
using namespace std;
void Add(int,int);
void Sub(int,int);
int main()
{
  int a,b;
  cout<<"\n Enter the two numbwrs:";
  cin>>a>>b;
  Add(a,b);
  cout<<"\n Enter the two numbers:";
  cin>>a>>b;
  Sub(a,b);
  return 0;
}
void Add(int a,int b)
{
	int sum;
	sum=a+b;
	cout<<"\n Addition:"<<sum;
}
void Sub(int a,int b)
{
	int res;	
	res=a-b;
	cout<<"\n Substraction:"<<res;
}
