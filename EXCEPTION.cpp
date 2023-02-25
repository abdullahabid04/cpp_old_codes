#include<iostream>
#include<exception>
using namespace std;

int main()
{
	while(1)
	{
		int a,b,j,x;
		cout<<"Enter table number : ";
		cin>>a;
		try
		{
			if(a <= 0)
			{
				throw a;
			}
		}
		catch(int)
		{
			cout<<endl<<"Cannot take starting table number smaller than or equal to 0"<<endl;
			cout<<endl<<"Taking table number equal to 1"<<endl;
			a = 1;
		}
		system("pause");		
		cout<<"Enter ending table number : ";
		cin>>b;
		try
		{
			if(b > 50)
			{
				throw b;
			}
		}
		catch(int)
		{
			cout<<endl<<"Cannot take ending table number greater than 50"<<endl;
			cout<<endl<<"Taking ending table number equal to 50"<<endl;
			b = 50;
		}
		system("pause");
		cout<<"Table of required number"<<endl;
		for(j=1;j<=b;j++)
		{
			x=a*j;
			cout<<a<<" * "<<j<<" = "<<x<<endl;
		}
			system("pause");
			system("cls");
	}
}
