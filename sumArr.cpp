#include<iostream>
using namespace std;
int main()
{
	int a[100],n,sum=0,i;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter the elements of array: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"Sum is: "<<sum;
}
