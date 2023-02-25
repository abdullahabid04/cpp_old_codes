#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,i,j;
	cout<<"enter starting number for first loop"<<endl;
	cin>>a;
	cout<<"enter ending number for first loop"<<endl;
	cin>>b;
	cout<<"enter starting number for second loop"<<endl;
	cin>>c;
	cout<<"enter ending number for second loop"<<endl;
	cin>>d;
	cout<<endl<<"----------"<<endl<<"values of first loop"<<endl<<endl;
	for(i=a;i<=b;i++)
	{
		cout<<i<<endl;
	}
	cout<<endl<<"----------"<<endl<<"values of second loop"<<endl<<endl;
	for(j=c;j<=d;j++)
	{
		cout<<j<<endl;
	}
}
