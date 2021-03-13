#include<iostream>
using namespace std;
void Reverse(int);
int main()
{
	int no;
	cout<<"\n Enter the number:";
	cin>>no;
	Reverse(no);
	return 0;
}
void Reverse(int no)
{
	int rev=0,rem;
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	cout<<"\n The reverse number is: "<<rev;
}
