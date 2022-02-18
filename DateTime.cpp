#include<iostream>
#include<ctime>
using namespace std;

class Time
{
	public:
		int hour;
		int min;
		int sec;
		
		time_t now=time(0); 
		tm *ltm=localtime(&now);
		void setTime()
		{
			hour=ltm->tm_hour;
			min=ltm->tm_min;
			sec=ltm->tm_sec;
		}
		Time getTime()
		{
			Time t;
			t.hour=hour;
			t.min=min;
			t.sec=sec;
			return t;
		}
		
		Time sleepTime(int h, int m, int s)
		{
			Time t1;
			t1.hour=hour-h;
			t1.min=min-m;
			t1.sec=sec-s;
			if(t1.sec<0)
			{
				t1.sec=t1.sec+60;
				t1.min--;
			}
			if(t1.min<0)
			{
				t1.min=t1.min+60;
				t1.hour--;
			}
			if(t1.hour<0)
			{
				t1.hour=t1.hour+24;
			}
			return t1;
		}
};

class date
{
	public:
		int day, month, year;
		time_t now=time(0);
		tm *ltm=localtime(&now);
		date setDay()
		{
			date d;
			year=ltm->tm_year+1900;
			month=ltm->tm_mon+1;
			day=ltm->tm_mday;
			d.day=day;
			d.month=month;
			d.year=year;
			return d;
		}
		date getDay()
		{
			date d1;
			d1.year=year;
			d1.month=month;
			d1.year=year;
		}
		date setDOB(int y, int m, int d)
		{
			date d2;
			d2.year=y;
			d2.month=m;
			d2.day=d;
			return d2;
		}
		date findAge(date d3)
		{
			date d4;
			d4.year=year-d3.year;
			d4.month=month-d3.month;
			d4.day=day-d3.day;
			if(d4.day<0)
			{
				d4.day=d4.day+30;
				d4.month--;
			}
			if(d4.month<0)
			{
				d4.month=d4.month+12;
				d4.year--;
			}
			return d4;
		}
};

int main()
{
	int hour, min, sec, day, month, year;
	Time t,t1;
	date d,d1,d2,d3;
	t.setTime();
	t1=t.getTime();
	cout<<"Current Time: \n";
	cout<<t1.hour<<":"<<t1.min<<":"<<t1.sec<<endl;
	t1=t.sleepTime(7,7,7);
	cout<<"Sleep Time is: \n";
	cout<<t1.hour<<":"<<t1.min<<":"<<t1.sec<<endl;
	d=d.setDay();
	d1=d.getDay();
	cout<<"Current Day is: ";
	cout<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;
	d2=d.setDOB(1999,02,10);
	d3=d.findAge(d2);
	cout<<"Your Age is : "<<d3.year<<" Years "<<d3.month<<" Months "<<d3.day<<" Days "<<"\n"<<endl;
}