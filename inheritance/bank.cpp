#include<iostream>

using namespace std;

class RBI{
	
	public:
	void getROI(){
		cout<<"Rate of RBI : 10%"<<endl;
	}
};

class SBI : public RBI{
	
	public:
	void getROI(){
		cout<<"Rate of SBI : 9%"<<endl;
	}
};

class BOB : public RBI{
	
	public:
	void getROI(){
		cout<<"Rate of BOB : 8.7%"<<endl;
	}
};

class ICICI : public RBI{
	
	public:
	void getROI(){
		cout<<"Rate of ICICI : 11%"<<endl;
	}
};

int main(){
	
	SBI i1;
	BOB i2;
	ICICI i3;
	
	i1.RBI :: getROI();
	i1.getROI();
	
	i2.getROI();
	
	i3.getROI();
	
	
	return 0;
}
