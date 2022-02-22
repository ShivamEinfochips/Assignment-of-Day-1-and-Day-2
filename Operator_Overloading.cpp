#include<iostream>
using namespace std;
 
class ABC
{
    int x,y;
    public:
        ABC()
        {
            x=0;
            y=0;
        }
        //Parameterized Constructor
        ABC(int a,int b)
        {
            x=a;
            y=b;
        }
        void disp()
        {
            cout<<"X = "<<x<<" Y = "<<y<<endl;
        }
        
        //overloading '+' operator
        ABC operator + (ABC a)
        {
            ABC temp;
            temp.x = x + a.x;
            temp.y = y + a.y;
            return temp;
        }//end of overloading fuction
}; // end of class ABC
int main()
{
    ABC a1(2,3),a2(10,5);
    ABC a3;
    a1.disp();
    a2.disp();
    a3 = a1+a2;
    a3.disp();
    return 0;
}