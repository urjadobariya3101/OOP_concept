#include<iostream>

using namespace std;

class math{
	
	public:
		
		void get(int a){
			cout<<a<<endl;
		}
		
		void get(int a, int b){
			cout<<a / b<<endl;
		}
		
		void get(int a, int b, int c){
			cout<<a * b * c<<endl;
		}
		
		void get (int a, int b, int c, int d){
			cout<<a + b + c + d<<endl;
		}
};

int main()
{
	
	math obj;
	
	obj.get(10);
	obj.get(40,20);
	obj.get(10,20,30);
	obj.get(10,20,30,40);
	
	return 0;
}
