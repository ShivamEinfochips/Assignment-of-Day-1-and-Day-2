#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
	int age,height,weight;
	void eat()
	{
	    cout<<"I can Eat";
	}
	void walk()
	{
	    cout<<"I can Walk";
	}
	void talk()
	{
	    cout<<"I can Talk";
	}
};

class doctor : public Person
{
    public:
	void diagonosis()
	{
	    cout<<"\nFrom Doctor Class";
	}
};
class footballer : private Person
{
    public:
	void football()
	{
	    cout<<"From football class";
	}
};

int main()
{
	doctor D1;
	D1.eat();
	D1.diagonosis();
	
	
	return 0;
}
