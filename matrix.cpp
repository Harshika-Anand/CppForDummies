#include<iostream>
using namespace std;
int main()
{
	int a[20][20],i,j,r,c;
	cout<<"Enter rows and columns: ";
	cin>>r>>c;
	cout<<"Enter the elements: ";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
