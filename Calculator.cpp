#include<iostream>
using namespace std;

class calculator
{
	public:
		int i1;
		int i2;
		
		void setinput(int a,int b)
		{
			i1=a;
			i2=b;
		}
		int add()
		{
			return i1+i2;
		}
		int mult()
		{
			return i1*i2;
		}
		int divi()
		{
			return i1/i2;
		}
		int sub()
		{
			return i1-i2;
		}
};

int main()
{
	calculator c1; 
	int operation;
	cout<<"Enter the operation to perform:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n"<<endl;
	cin>>operation; 
	c1.setinput(21,3);
	if(operation==1)
	{
	    c1.add();
	    cout<<"Addition of "<<c1.i1<<" and "<<c1.i2<<" is: "<<c1.add()<<endl;
	}
	else if(operation==2)
	{
	    c1.sub();
	    cout<<"Subtraction of "<<c1.i1<<" and "<<c1.i2<<" is: "<<c1.sub()<<endl;
	}
	else if(operation==3)
	{
	    c1.mult();
	    cout<<"Multiplication of "<<c1.i1<<" and "<<c1.i2<<" is: "<<c1.mult()<<endl;
	}
	else if(operation==4)
	{
	    c1.divi();
	    cout<<"Division of "<<c1.i1<<" and "<<c1.i2<<" is: "<<c1.divi()<<endl;
	}
	else
	{
	    cout<<"Invalid";
	}
	return 0;
}		