/#include <iostream>
using namespace std;

int main()
{
	float N,q,P=0;
	cout<<endl;
	cout<<"-------------"<<endl<<endl;
	cout<<"Enter a No."<<endl<<endl;
	cin>>N;	
	cout<<"Enter divide Count."<<endl<<endl;
	cin>>q;
	
	while(P<q)
	{
		float x = N/2;
		N=x;
		cout<<endl<<"******"<<N<<endl;
		P=P+1;
	}
}
