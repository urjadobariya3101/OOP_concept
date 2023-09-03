#include<iostream>

using namespace std;

class A{
	
	public:
		virtual void area() = 0;
	
};

class circle : public A{
	
	public:
		
		int r;
		
		void area(){
			cout<<"Enter the value of Range : ";
			cin>>r;
			
			cout<<"Area of circle : "<<3.14 * r * r<<endl<<endl;	
		}
};

class triangle : public A{
	
	public:
		
		int b;
		int h;
		
		void area(){
			
			cout<<"Enter base of triangle : ";
			cin>>b;
			
			cout<<"Enter height of traingle : ";
			cin>>h;
			
			cout<<"Area of Triangle : "<<h * b / 2<<endl<<endl;
		}
};

class rectangle : public A{
	
	public:
		
		int l,w;
		
		void area(){
			
			cout<<"Enter length of rectangle : ";
			cin>>l;
			
			cout<<"Enter width of rectangle : ";
			cin>>w;
			
			cout<<"Area of Rectangle : "<<l * w;
		}
	
};

int main()
{
	
	circle obj;
	obj.area();
	
	triangle obj1;
	obj1.area();
	
	rectangle obj2;
	obj2.area();
	
	return 0;
}
