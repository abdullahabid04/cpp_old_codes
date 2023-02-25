#include<iostream>
using namespace std;

int main()
{
	int t;
	
	cout<<"enter temprature"<<endl;
	cin>>t;
	
	if (t<0)
		cout<<"freezing";
	else if(t>=0,t<=10)
		cout<<"extremely cold";
	else if(t>10,t<=20)
		cout<<"normally cold";
	else if(t>20,t<=30)
		cout<<"moderate";
	else if(t>30,t<=40)
		cout<<"normally hot";
	else if(t>40,t<=50)
    	cout<<"extremely hot";
	else if(t>50)
    	cout<<"unsurviveable";
}
