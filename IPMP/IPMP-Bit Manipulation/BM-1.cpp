#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the number"<<endl;
	int x;
	cin>>x;
	if((x & (x-1))==0 )
	cout<<"Number is power of 2"<<endl;
	else
	cout<<"Number is not a power of 2"<<endl;
	return 0;
}


