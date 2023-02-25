#include <iostream>
using namespace std;

int main()
{
	int Marks;
	cout<<"Enter your marks Abdulrehman"<<endl;
	cin>>Marks;
	if (Marks>90)
		cout<<"Your grade is A+";
	else if (Marks>=80)
		cout<<"Your grade is A";
	else if (Marks>=70)
		cout<<"Your grade is B";
	else if (Marks>=60)
		cout<<"Your grade is C";
	else if (Marks>=50)
		cout<<"Your grade is D";
	else if (Marks<50)
		cout<<"Your grade is F";
}
