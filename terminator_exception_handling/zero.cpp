#include<iostream>

using namespace std;

int main()
{
	
	int a = 10;
	int b = 0;
	
	try{
		
		if(b == 0){
			
			throw a;
		}
		else{
			
			cout<<"Divide : "<<a / b<<endl;
		}
	}
	catch(int n){
		cout<<"Cannot divisiable by zero.."<<n<<endl;
	}
	
	return 0;
}
