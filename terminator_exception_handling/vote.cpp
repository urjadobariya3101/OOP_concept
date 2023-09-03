#include<iostream>

using namespace std;

int main(){
	
	int a;
	
	cout<<"Enter your age : ";
	cin>>a;
	
	try{
		
		if(a < 18){
			
			throw a;
		}
		
		else{
			
			cout<<endl;
			cout<<"You are able to give a vote...";
		}
		
	}
	catch(int b){
		
		cout<<endl;
		cout<<"You are not able for give a vote..";
	}
	
	return 0;
}
