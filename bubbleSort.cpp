#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,p,temp,flag=0;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(p=1;p<n;p++)
	{
		for(i=0;i<n-p;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
