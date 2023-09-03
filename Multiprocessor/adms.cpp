#include<iostream>

using namespace std;

class child{
	
	public:
		
		void calculate(int a){
			cout<<a<<endl;
		}
		
		void calculate(int a, int b){
			cout<<a / b<<endl;
		}
		
		void calculate(int a, int b, int c){
			cout<<a - b - c<<endl;
		}
		
		void calculate(int a, int b, int c, int d){
			cout<<a * b * c * d<<endl;
		}
		
		void calculate(int a, int b, int c, int d, int e){
			cout<<a + b + c + d + e<<endl;
		}
};

int main()
{
	
	child obj;
	
	obj.calculate(10);
	obj.calculate(20,10);
	obj.calculate(50,10,20);
	obj.calculate(2,2,2,2);
	obj.calculate(1,1,1,1,1);
	
	return 0;
}
