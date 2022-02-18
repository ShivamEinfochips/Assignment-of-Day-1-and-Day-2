
//In this program we have used and understand all types of constructor i.e simple, parameterized and copy constructor. 
#include <iostream>
using namespace std;

class construct{
public:
int a;
int b;
construct() {
cout << "Constructor Created\n"<<endl;
}
construct(int x,int y)
{
    a=x;
    b=y;
    cout<<"Paremeterized Constructor Called\n";
}
construct(construct &c)
{
    a=c.a;
    b=c.b;
    cout<<"Copy Constructor\n";
}
//Destructor
~construct() {
cout << "Destructor Called"<<endl;
}
};
int main( )
{
construct c1;
construct c2(2,3);
construct c3(c2);
return 0;
}