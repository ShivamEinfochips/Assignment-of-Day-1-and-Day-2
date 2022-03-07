#include<iostream>
#include <cstring>
using namespace std;

//Parent Class Student
class student 
{
   protected:
   int rollno;
   char sname[100];
   public: 
	student(int roll, char n[])
	{
		rollno = roll;
		strcpy( sname, n);
	}
};

//Parent Class Test
class test
{
	public:
	int marks[5];
	test(int m[])
	{
		for(int j=0;j<5;j++)
		{
			marks[j] = m[j];
			
		}
	}
};

//Inherited Class Result
class result : public student, public test
{
    public:
	int total = 0;
	float percenrtage; 
	result(int roll, char n[], int m[]) : student(roll,n), test(m)
	{
		for(int i=0;i<5;i++)
		{
			total = total + marks[i];
			
		}
		percenrtage = float(total/5);
	}
	void print()
	{
		cout << "Total " << total <<endl;
		cout << "Percenrtage " << percenrtage <<endl;
	}
};

int main()
{
	int rollno;
	int marks[5];
	char name[50];
	cout << "Enter roll number : ";
	cin >> rollno;
	cout << "Enter name : "<<endl;
	cin >> name;

	for(int i=0;i<5;i++)
	{
		cout << "Enter marks of subject " << i+1 << ": ";
		cin >> marks[i];
	}
	result r(rollno,name,marks);
	r.print();

	return 0;
}