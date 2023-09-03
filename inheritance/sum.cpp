#include<iostream>

using namespace std;

class A{
	
	public:
		A(int a){
			cout<<a;
		}
};

class B : public A{
	
	public:
		
		B(int b){
			cout<<b;
		}
};

class C{
	
	public:
		
		C(int c){
			cout<<c;
		}
};

class D : public B , public C{
	
	public:
		
		D(int d){
			cout<<d;
		}
};

int main()
{
	D obj
	obj.D(10);
	
	return 0;
}
