#include<iostream>
using namespace std;
int main()
{
	int i,n,f=1;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"Factorial: "<<f;
}
