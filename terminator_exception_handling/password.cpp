#include<iostream>

using namespace std;

int main()

{

    char password[25];

    int i;

    cout<<"Create password must contain an uppercase letter) : ";
    cin>>password;

	try{
		for (i = 0; i <= 25; i++){

        	if ( isupper(password[i]) == 1 ){
            	break;
            	goto y;
        	}

        	if (i == 25){
        		
           		throw password;
        	}
		}
		
		y:
		cout<<"your password is valid";
		
	}
	
	catch(...){
		
		cout<<endl<<"Please create your password in Uppercase...";
	}

	return 0;
}
