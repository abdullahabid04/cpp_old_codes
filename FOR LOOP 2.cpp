#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,j,i,x;
	cout<<"Enter starting number for first loop"<<endl;
	cin>>a;
	cout<<"Enter ending number for first loop"<<endl;
	cin>>b;
	cout<<"Enter starting number for second loop"<<endl;
	cin>>c;
	cout<<"Enter ending number for second loop"<<endl;
	cin>>d;
	
	cout<<endl<<"-----------"<<endl<<"values of first loop"<<endl<<endl;
	
	for(j=a;j<=b;j++)
	{
		cout<<j<<endl;	
    }
    
	cout<<endl<<"-----------"<<endl<<"values of second loop"<<endl<<endl;
	
	for(i=c;i<=d;i++)
	{
		cout<<i<<endl;
    }
    
	cout<<endl<<"-----------"<<endl<<"addition of both loops"<<endl<<endl;
    
	for(j=a;j<=b;j++)
    {
    	for(i=c;i<=d;i++)
		{
			x=i+j;
			cout<<x<<endl;
		}	
	}
}
