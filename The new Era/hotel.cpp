#include<iostream>
#include<string.h>

using namespace std;

class hotel {
	
	public:
	
	int hotel_id;
	char hotel_name[50];
	int hotel_staff;
	
};

int main()
{
	
	hotel obj1,obj2,obj3;
	
	obj1.hotel_id = 1;
	strcpy(obj1.hotel_name,"Tulsi Hotel");
	obj1.hotel_staff=15;
	
	obj2.hotel_id = 2;
	strcpy(obj2.hotel_name,"Amiras Hotel");
	obj2.hotel_staff=11;
	
	obj3.hotel_id = 3;
	strcpy(obj3.hotel_name,"Avadh Hotel");
	obj3.hotel_staff=25;
	
	cout<<"Hotel Id: "<<obj1.hotel_id<<endl;
	cout<<"Hotel Name: "<<obj1.hotel_name<<endl;
	cout<<"Hotel Staff: "<<obj1.hotel_staff<<endl<<endl;
	
	cout<<"Hotel Id: "<<obj2.hotel_id<<endl;
	cout<<"Hotel Name: "<<obj2.hotel_name<<endl;
	cout<<"Hotel Staff: "<<obj2.hotel_staff<<endl<<endl;
	
	cout<<"Hotel Id: "<<obj3.hotel_id<<endl;
	cout<<"Hotel Name: "<<obj3.hotel_name<<endl;
	cout<<"Hotel Staff: "<<obj3.hotel_staff<<endl<<endl;
	
	return 0;
}
