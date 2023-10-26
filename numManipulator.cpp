#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a hexadecimal number: ";
	cin>>hex>>n;                              //once input is taken in hex, all further inputs will automatically be taken as hex. Same goes for print statement.
	cout<<"Octal: "<<oct<<n<<" ";
	cout<<"Decimal: "<<dec<<n;
}
