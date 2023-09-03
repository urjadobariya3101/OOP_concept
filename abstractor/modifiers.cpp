#include<iostream>

using namespace std;

class A{
	
	private:
//		int a;
		
	public:
		int b;
		
//	privated:
		int c;
		
};

int main()
{
	
	A obj;
	
//	obj.a = 10;
	obj.b = 20;
	obj.c = 30;
	
//	cout<<obj.a<endl; // Not accessible
	cout<<obj.b<<endl; //Accessible
	cout<<obj.c<<endl; // NOt accessible
	
	return 0;
	
}
