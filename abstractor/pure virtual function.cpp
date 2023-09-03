#include<iostream>

using namespace std;

class car{
	
	public:
		virtual void automatic() = 0;
};

class BMW : public car{
	
	public:
		void automatic(){
			
			cout<<"Car is automatic."<<endl;
			
		}
		
};

int main()
{
	
	BMW obj;
	
	obj.automatic();
	
	return 0;
}
