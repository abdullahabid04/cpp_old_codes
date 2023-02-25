#include<iostream>
#include <windows.h>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<" ------------------------------ "<<endl<<endl;
	cout<<" Welcome to Abdullah Banks Limited "<<endl<<endl;
	cout<<" Please insert your credit card "<<endl<<endl;
	Sleep(2000);
	cout<<" Credit card inserted "<<endl<<endl;
	cout<<" Enter your account password "<<endl<<endl;
	cout<<" ";
	cin>>a;
	
	if(a==1234)
	{
		cout<<endl<<" ------------------------------ "<<endl<<endl;
		cout<<" Congratulations! you are permitted to access to your account "<<endl<<endl;
		b=100000;
		cout<<" ------------------------------ "<<endl<<endl;
		cout<<" Your balance is "<<b<<endl<<endl;
		cout<<" How much money you want "<<endl<<endl;
		cout<<" ";
		cin>>c;
		cout<<endl;
		if(b<c)
		{
			cout<<"  Get Lost You don't have enough balance "<<endl<<endl; 
		}
		else if(b>c)
		{
			d=b-c;
			cout<<" Your remaining balance is "<<d<<endl<<endl;
			cout<<" Transaction successful "<<endl<<endl;
			cout<<" Thanks for using  Abdullah Banks Limited "<<endl<<endl;
			cout<<" Please visit us again "<<endl<<endl;	
		} 	
	}
	else 
	{
		cout<<endl;
		cout<<" Get lost out of my sight. You dont know your account password "<<endl;
	}
}
