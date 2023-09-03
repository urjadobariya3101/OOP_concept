#include <iostream>
#include <string.h>

using namespace std;

class User{
   //private:
     // int a;

    public:
    
    int id;
    char name[50];
};

int main()
{
    User obj;
    
    //obj.a=50;
    obj.id=15;
    strcpy(obj.name,"hii!");
    
    //cout << obj.a <<endl;
    cout << obj.id << endl;
    cout << obj.name <<endl;
    
    return 0;
}
