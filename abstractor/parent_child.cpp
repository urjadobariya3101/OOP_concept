#include<iostream>

using namespace std;

class parent{
	
	public:
		
		virtual void childdetails(){
			cout<<"Parent Class."<<endl;
		}
};

class child : public parent{
	
	public:
		
		void childdetail(){
			cout<<"Child Details Class."<<endl;
		}
};

int main()
{
	
	parent obj;
	child obj2;
	
	parent *obj3;
	
	obj3 = &obj2;
	obj3->childdetails();
	
	return 0;
}
