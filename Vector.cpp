#include<iostream>
#include <vector>
#include <fstream>
using namespace std;
//Function Prototypes

void data_clearing();
void bmi_cal();
void data_saving();

//Global Declarations:
	string date,loop_check;
	string time;
	string name,city,gender;
	string disease_a="Abnormal Temperature ";
	string disease_b="Abnormal Blood Pressure ";
	string disease_c="Abnormal Sugar Level ";	
	int age,disease,fee;
	int pat_id=1;
	int bp_count=0,temperature_count=0,sugar_count=0;
	int male_count=0,female_count=0;
	float height,weight;
	vector <int> sr,ages,fees;
	vector <float> weights,heights,bmi;
	vector <string> times,names,cities,genders,diseases;

int main()
{
	cout<<"Enter Date (DD-MM-YYYY) : ";
	cin>>date;
	system("cls");
	cout<<date<<"\t\tP:New Patient\t\tN:Next Day"<<endl;
	cin>>loop_check;
	while(loop_check!="N"&& loop_check!="P")
	{
		cout<<"Enter a valid command : ";
		cin>>loop_check;
	}
	
	system("cls");
	cout<<date<<"\t\tP:New Patient\t\tN:Next Day"<<endl;
	
	while(1)
	{
		
	cout<<"Patient id : "<<pat_id<<endl;
	sr.push_back(pat_id);
	cout<<"Enter Time (HH:MM) : ";
	cin>>time;
	times.push_back(time);
	cout<<"Patient Name : ";
	cin>>name;
	names.push_back(name);
	cout<<"Patient City : ";
	cin>>city;
	cities.push_back(city);
	cout<<"Patient Gender (M or F): ";
	cin>>gender;
	while(1)
	{
		if(gender=="M")
		{
			male_count++;
			break;
		}		
		if(gender=="F")
		{
			female_count++;
			break;
		}		
		else
		{
			cout<<"Please enter a valid gender:";
			cin>>gender;
		}
		
	}
	genders.push_back(gender);
	cout<<"Patient Age (YY) : ";
	cin>>age;
	ages.push_back(age);
	cout<<"Patient Weight (KG) : ";
	cin>>weight;
	weights.push_back(weight);
	cout<<"Patient's Height (cm) : ";
	cin>>height;
	heights.push_back(height);
	cout<<"Select Patient's Disease : "<<endl;
	cout<<"1. "<<disease_a<<endl;
	cout<<"2. "<<disease_b<<endl;
	cout<<"3. "<<disease_c<<endl;
	cout<<"Enter Option : ";
	cin>>disease;
	while(1)
	{
		if(disease==1)
		{
			temperature_count++;
			diseases.push_back(disease_a);
			break;
		}		
		if(disease==2)
		{
			bp_count++;
			diseases.push_back(disease_b);
			break;
		}		
		if(disease==3)
		{
			sugar_count++;
			diseases.push_back(disease_c);
			break;
		}		
		else
		{
			cout<<"Please enter a valid option:";
			cin>>disease;
		}
		
		
	}
	cout<<"Fee Charged (Rs.) : ";
	cin>>fee;
	fees.push_back(fee);
	cout<<"Data has been recorded."<<endl;
	pat_id++;
	system("pause");
	system("cls");
	cout<<date<<"\t\tP:New Patient\t\tN:Next Day"<<endl;
	cin>>loop_check;
	while(1)
	{
		if(loop_check=="N")
		{
			bmi_cal();
			data_saving();
			data_clearing();
			cout<<"Data of Previous Day has been saved."<<endl;
			pat_id=1;
			cout<<"Enter Next Working Day Date (DD-MM-YYYY) : ";
			cin>>date;
			system("cls");
			cout<<date<<"\t\tP:New Patient\t\tN:Next Day"<<endl;
			break;						
		}
		if(loop_check=="P")
		{
			system("cls");
			cout<<date<<"\t\tP:New Patient\t\tN:Next Day"<<endl;
			break;			
		}
		else
		cout<<"Please Select a valid Option : ";
		cin>>loop_check;
	}	
	
	}
		
} 
void data_saving()
{
	int total_fee=0;
	int abnormal_bmi_count=0,normal_bmi_count=0;
	string filename = date;
	filename += ".txt";
	ofstream file;
	file.open(filename.c_str());
	file<<"\t\t\t\tDate : "<<date<<endl;
	file<<"No of Patients Checked = "<<pat_id<<endl;
	file<<"No of Male Patients = "<<male_count<<endl;
	file<<"No of Female Patients = "<<female_count<<endl;
	file<<"Count for Each Disease : "<<endl;
	file<<"\t\t"<<disease_a<<" = "<<temperature_count<<endl;
	file<<"\t\t"<<disease_b<<" = "<<bp_count<<endl;	
	file<<"\t\t"<<disease_c<<" = "<<sugar_count<<endl;	
	for(int i=0;i<sr.size();i++)
	{
		if(bmi[i]>=18.5 && bmi[i]<=24.9)		
			normal_bmi_count++;		
		else
			abnormal_bmi_count++;
	}
	file<<"Patients with Normal BMI = "<<normal_bmi_count<<endl;
	file<<"Patients with Abnormal BMI = "<<abnormal_bmi_count<<endl;
	for(int i=0;i<sr.size();i++)
	{
		total_fee+=fees[i];
	}
	file<<"Total Fee Collected = "<<total_fee<<endl;
	file<<"Complete Patient Summary:"<<endl;
	file<<"-------------------------"<<endl;
		file<<"Serial\tDate\t\tTime\t";
		file<<"Name\tCity\tGender\t";
		file<<"Age\tWeight\tHeight\t";
		file<<"BMI\tFee\tDisease"<<endl;				
	for(int i=0;i<sr.size();i++)
	{
		file<<sr[i]<<"\t"<<date<<"\t"<<times[i]<<"\t";		
		file<<names[i]<<"\t"<<cities[i]<<"\t"<<genders[i]<<"\t";		
		file<<ages[i]<<"\t"<<weights[i]<<"\t"<<heights[i]<<"\t";
		file<<bmi[i]<<"\t"<<fees[i]<<"\t"<<diseases[i]<<"\t"<<endl;				
	}
	file.close();	
}

void bmi_cal()
{
	int bmi_temp=0;
	for(int i=0;i<sr.size();i++)
	{
		bmi_temp=weights[i];
		bmi_temp=bmi_temp*10000;
		bmi_temp=bmi_temp/heights[i];
		bmi_temp=bmi_temp/heights[i];
		bmi.push_back(bmi_temp);
	}
	
}
void data_clearing()
{
	for(int i=0;i<sr.size();i++)
			{
				sr.pop_back();
				times.pop_back();
				names.pop_back();
				cities.pop_back();
				genders.pop_back();
				ages.pop_back();
				weights.pop_back();
				heights.pop_back();
				diseases.pop_back();
				
			}
}




