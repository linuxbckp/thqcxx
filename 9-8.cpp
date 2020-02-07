#include <iostream>
using namespace std;

class Time{
	public:
	Time(int,int,int);
	int hour;
	int minute;
	int sec;
	void get_time();
	
	};
	
Time::Time(int h,int m,int s){
	hour=h;
	minute=m;
	sec=s;
	}
	
void fun(Time &t){
	t.hour=18;
	}

int main(){
	Time t1(10,13,36);
	fun(t1);
	cout<<t1.hour<<endl;
	
	return 0;
	}
