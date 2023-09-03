#include<iostream>

using namespace std;

class user1{
	
	public:
		void get(int a){
			cout<<"User1 Data.."<<a<<endl;
		}
};

class user2 : public user1{
	
	public:
		void get(int a){
			cout<<"User data..."<<a<<endl;
			
		}
};

int main()
{
	user2 obj;
	
	obj.user1::get(55);
	obj.get(25);
	
	return 0;
}
