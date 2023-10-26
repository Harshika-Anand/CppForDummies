#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,ele,first,last,mid;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the element to be searched: ";
	cin>>ele;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    if(ele<a[mid])
    {
    	last=mid-1;
	}
	else if(ele>a[mid])
	{
		first=mid+1;
	}
	else if(ele==a[mid])
	{
		cout<<"Element found at: "<<mid;
	}
}
