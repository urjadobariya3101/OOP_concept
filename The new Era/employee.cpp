#include<iostream>
#include<string.h>

using namespace std;

class employee{
	
	public:
	
	int emp_id;
	char emp_name[50];
	char emp_role[50];
	int emp_age;
	int emp_salary;
	int emp_experience;
	char emp_city[30];
	char emp_company_name[100];
	
};

int main()
{
	employee emp,emp2,emp3,emp4,emp5;
	
	emp.emp_id = 1;
	strcpy(emp.emp_name,"Bhavesh");
	strcpy(emp.emp_role,"CEO");
	emp.emp_age = 50;
	emp.emp_salary = 100000;
	emp.emp_experience = 15;
	strcpy(emp.emp_city,"Ahemdabad");
	strcpy(emp.emp_company_name,"Hyperlink InfoSystem");
	
	emp2.emp_id = 2;
	strcpy(emp2.emp_name,"Rakesh");
	strcpy(emp2.emp_role,"Manager");
	emp2.emp_age = 40;
	emp2.emp_salary = 50000;
	emp2.emp_experience = 18;
	strcpy(emp2.emp_city,"Surat");
	strcpy(emp2.emp_company_name,"Tata Consultancy Services.");
	
	emp3.emp_id = 3;
	strcpy(emp3.emp_name,"Chandresh");
	strcpy(emp3.emp_role,"COO");
	emp3.emp_age = 32;
	emp3.emp_salary = 70000;
	emp3.emp_experience = 10;
	strcpy(emp3.emp_city,"Vadodara");
	strcpy(emp3.emp_company_name,"HCL Technologies");
	
	emp4.emp_id = 4;
	strcpy(emp4.emp_name,"Bhavin");
	strcpy(emp4.emp_role,"CFO");
	emp4.emp_age = 45;
	emp4.emp_salary = 0000;
	emp4.emp_experience = 15;
	strcpy(emp4.emp_city,"Rajkot");
	strcpy(emp4.emp_company_name,"Infosys");
	
	emp5.emp_id = 5;
	strcpy(emp5.emp_name,"Tushar");
	strcpy(emp5.emp_role,"CMO");
	emp5.emp_age = 25;
	emp5.emp_salary = 60000;
	emp5.emp_experience = 5;
	strcpy(emp5.emp_city,"Surat");
	strcpy(emp5.emp_company_name,"Mphasis");
	
	cout<<"Id : "<<emp.emp_id<<endl;
	cout<<"Name : "<<emp.emp_name<<endl;
	cout<<"Role : "<<emp.emp_role<<endl;
	cout<<"Age : "<<emp.emp_age<<endl;
	cout<<"salary : "<<emp.emp_salary<<endl;
	cout<<"Expereince : "<<emp.emp_experience<<endl;
	cout<<"City : "<<emp.emp_city<<endl;
	cout<<"Company Name : "<<emp.emp_company_name<<endl<<endl;

	cout<<"Id : "<<emp2.emp_id<<endl;
	cout<<"Name : "<<emp2.emp_name<<endl;
	cout<<"Role : "<<emp2.emp_role<<endl;
	cout<<"Age : "<<emp2.emp_age<<endl;
	cout<<"salary : "<<emp2.emp_salary<<endl;
	cout<<"Expereince : "<<emp2.emp_experience<<endl;
	cout<<"City : "<<emp2.emp_city<<endl;
	cout<<"Company Name : "<<emp2.emp_company_name<<endl<<endl;
	
	cout<<"Id : "<<emp3.emp_id<<endl;
	cout<<"Name : "<<emp3.emp_name<<endl;
	cout<<"Role : "<<emp3.emp_role<<endl;
	cout<<"Age : "<<emp3.emp_age<<endl;
	cout<<"salary : "<<emp3.emp_salary<<endl;
	cout<<"Expereince : "<<emp3.emp_experience<<endl;
	cout<<"City : "<<emp3.emp_city<<endl;
	cout<<"Company Name : "<<emp3.emp_company_name<<endl<<endl;
	
	cout<<"Id : "<<emp4.emp_id<<endl;
	cout<<"Name : "<<emp4.emp_name<<endl;
	cout<<"Role : "<<emp4.emp_role<<endl;
	cout<<"Age : "<<emp4.emp_age<<endl;
	cout<<"salary : "<<emp4.emp_salary<<endl;
	cout<<"Expereince : "<<emp4.emp_experience<<endl;
	cout<<"City : "<<emp4.emp_city<<endl;
	cout<<"Company Name : "<<emp4.emp_company_name<<endl<<endl;
	
	cout<<"Id : "<<emp5.emp_id<<endl;
	cout<<"Name : "<<emp5.emp_name<<endl;
	cout<<"Role : "<<emp5.emp_role<<endl;
	cout<<"Age : "<<emp5.emp_age<<endl;
	cout<<"salary : "<<emp5.emp_salary<<endl;
	cout<<"Expereince : "<<emp5.emp_experience<<endl;
	cout<<"City : "<<emp5.emp_city<<endl;
	cout<<"Company Name : "<<emp5.emp_company_name<<endl<<endl;	
	
	
	return 0;
}
