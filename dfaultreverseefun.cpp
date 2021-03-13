#include<iostream>
using namespace std;
void Reverse()
{
	int no,rev=0,rem;
	cout<<"\n Enter the number:";
	cin>>no;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	cout<<"\n The reverse number is: "<<rev;
}
int main()
{
	Reverse();
	return 0;
}
