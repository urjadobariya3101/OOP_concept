#include<iostream>
#include<string.h>

using namespace std;

class car{
	
	public:
	
	int id;
	char name[50];
	char color[10];
	char model[20];
	int year;
	
};

int main()
{
	
	car car1,car2,car3,car4;
	
	car1.id = 1;
	strcpy(car1.name,"Swift");
	strcpy(car1.color,"Red");
	strcpy(car1.model,"ZXI Plus");
	car1.year = 2004;
	
	cout<<"Car Id : "<<car1.id<<endl;
	cout<<"Car Name : "<<car1.name<<endl;
	cout<<"Car color : "<<car1.color<<endl;
	cout<<"Car Model : "<<car1.model<<endl;
	cout<<"Car realising year : "<<car1.year<<endl<<endl;
	
	car2.id = 2;
	strcpy(car2.name,"Alto");
	strcpy(car2.color,"Black");
	strcpy(car2.model,"ZXI Plus");
	car2.year = 2010;
	
	cout<<"Car Id : "<<car2.id<<endl;
	cout<<"Car Name : "<<car2.name<<endl;
	cout<<"Car color : "<<car2.color<<endl;
	cout<<"Car Model : "<<car2.model<<endl;
	cout<<"Car realising year : "<<car2.year<<endl<<endl;
	
	car3.id = 3;
	strcpy(car3.name,"Creta");
	strcpy(car3.color,"Red");
	strcpy(car3.model,"ZXI Plus");
	car3.year = 2015;
	
	cout<<"Car Id : "<<car3.id<<endl;
	cout<<"Car Name : "<<car3.name<<endl;
	cout<<"Car color : "<<car3.color<<endl;
	cout<<"Car Model : "<<car3.model<<endl;
	cout<<"Car realising year : "<<car3.year<<endl<<endl;
	
	car4.id = 4;
	strcpy(car4.name,"Kia");
	strcpy(car4.color,"White");
	strcpy(car4.model,"ZXI Plus");
	car4.year = 2020;
	
	cout<<"Car Id : "<<car4.id<<endl;
	cout<<"Car Name : "<<car4.name<<endl;
	cout<<"Car color : "<<car4.color<<endl;
	cout<<"Car Model : "<<car4.model<<endl;
	cout<<"Car realising year : "<<car4.year<<endl<<endl;
	
	
	return 0;
}
