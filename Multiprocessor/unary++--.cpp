#include<iostream>

using namespace std;

class user{
	
	private:
		
		int a;
		
	public:
		
		void set(int n1){
			a = n1;
		}
		void get(){
			cout<<a<<endl;
		}
		user operator ++ (){
			user temp;
			temp.a = ++a;
			return temp;
		}
		
		user operator -- (){
			user temp;
			temp.a = --a;
			return temp;
		}
		
};

int main()
{
	user obj1, obj2, obj3, obj4;
	
	obj1.set(5);
	obj1.get();
	
	obj2 = ++obj1;
	obj2.get();
	
	obj3 = --obj1;
	obj3.get();
	
	return 0;
}
