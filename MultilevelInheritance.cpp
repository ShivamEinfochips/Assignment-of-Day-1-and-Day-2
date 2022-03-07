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
class surgeon : public doctor
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
    return 0;
}
