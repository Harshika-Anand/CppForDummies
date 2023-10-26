#include<iostream>
using namespace std;
int main()
{
	int n,temp,rev=0,d;
	cout<<"Enter a number: ";
	cin>>n;
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		rev=rev*10+d;
		temp=temp/10;
	}
	cout<<"Reverse of n is: "<<rev;
}
