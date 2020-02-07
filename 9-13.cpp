#include <iostream>
using namespace std;

class Date;

class Time{
	public:
	Time(int,int,int);
	void display(Date &);
	private:
	int hour;
	int minute;
	int sec;
	
	};
	
class Date{
	public:
	Date(int,int,int);
	friend void Time::display(Date &);
	private:
	int month;
	int day;
	int year;
	};
	
Time::Time(int h,int m,int s){
	hour=h;
	minute=m;
	sec=s;
	}
	
void Time::display(Date &t){
	cout<<t.month<<"/"<<t.day<<"/"<<t.year<<endl;
	
	}
	
Date::Date(int m,int d,int y){
	month =m;
	day=d;
	year=y;
	}
	

int main(){
	Time t1(10,13,36);
	Date d1(12,25,2020);
	t1.display(d1);
	
	return 0;
	}
