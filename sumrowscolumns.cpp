#include<iostream>
using namespace std;
int main()
{
	int a[20][20],i,j,r,c,sumr=0,sumc=0;
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
	for(i=0;i<r;i++)
	{
		sumr=0;
		for(j=0;j<c;j++)
		{
			sumr=sumr+a[i][j];
		}
		cout<<"sum of row "<<i<<": "<<sumr<<"\n";
	}
	for(j=0;j<c;j++)
	{
		sumc=0;
		for(i=0;i<r;i++)
		{
			sumc=sumc+a[i][j];
		}
		cout<<"sum of column "<<j<<": "<<sumc<<"\n";
	}
}
