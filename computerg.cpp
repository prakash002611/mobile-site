#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter an integer number between 1 & 99999:";
	cin>>num;
	if(num<100&&num>=1)
	{
		cout<<"its a two digit number";
	}
	else if(num <1000 && num>=100)
	{
		cout<<"its a three digit number";
	}
	else if(num<10000&&num>=1000)
	{
		cout<<"its a four digit number";
	}
	else if(num<100000&&num>=10000)
	{
		cout<<"its a five digit number";
	}
	else
	{
		cout<<"no. is not between 1 & 99999";
	}
	return 0;
}
