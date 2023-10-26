#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1,c,n,i;
	cout<<"Enter number of terms of fibonacci series: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}
