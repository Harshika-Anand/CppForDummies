#include<iostream>
using namespace std;
int main()
{
	int ch,a,b;
	cout<<"Enter 2 numbers: ";
	cin>>a>>b;
	cout<<"Enter 1 for sum, 2 for difference, 3 for product: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Sum is: "<<(a+b);
			break;
		case 2:
			cout<<"Difference is: "<<(a-b);
			break;
		case 3:
			cout<<"Product is: "<<(a*b);
			break;
		default:
			cout<<"Invalid Input!";
	}
}
