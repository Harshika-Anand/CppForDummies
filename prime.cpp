#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"Not prime";
	else
	cout<<"Prime";
}
