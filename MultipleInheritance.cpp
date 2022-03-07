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
	    cout<<"\nI can Walk";
	}
	void talk()
	{
	    cout<<"I can Talk";
	}
};

class doctor 
{
    public:
	void diagonosis()
	{
	    cout<<"\nFrom Doctor Class";
	}
};
class surgeon : public doctor,public Person
{
    public:
	void surge()
	{
	    cout<<"Surgeon Class";
	}
};
int main()
{
    surgeon s1;
    s1.surge();
    s1.diagonosis();
    s1.walk();
	return 0;
}
