#include<iostream>
using namespace std;
void HRADA(double &HRA,double &DA, int basic_salary);
int main()
{
double basic_salary, gross_salary, HRA, DA;
cout<<"ENTER YOUR SALARY = ";
cin>>basic_salary;
HRADA(HRA , DA, basic_salary);
gross_salary=HRA+basic_salary+DA;
cout<<"THE GROSS SALARY IS : "<<gross_salary;
return 0;
}
void HRADA(double &HRA,double &DA, int basic_salary)
{
	if(basic_salary<1500){
		
	HRA=0.1*basic_salary;
    DA=0.9*basic_salary;
}
else{
	HRA=500;
    DA=0.98*basic_salary;
}
}
