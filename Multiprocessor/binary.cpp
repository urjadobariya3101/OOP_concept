#include<iostream>

using namespace std;

class user{
	
	private:
		int a;
		int b;
		
	public:
		void set(int n1, int n2){
			a = n1;
			b = n2;
		}
		
		void get(){
			cout<<a<<"\t"<<b<<endl;
		}
		
		user operator + (user n){
			
			user temp;
			temp.a = a + n.a;
			temp.b = b + n.b;
			
			return temp;
			
		}
		
		user operator - (user n){
			
			user temp;
			temp.a = a - n.a;
			temp.b = b - n.b;
			
			return temp;
			
		}
};

int main()
{
	
	user obj1, obj2, obj3, obj4;
	
	obj1.set(20,10);
	obj1.get();
	
	obj2.set(10,20);
	obj2.get();
	
	obj3 = obj1 + obj2;
	obj3.get();
	
	obj4 = obj1 - obj2;
	obj4.get();
	
	return 0;
}
