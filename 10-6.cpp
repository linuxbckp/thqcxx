#include <iostream>
using namespace std;

class Time{
	public:
	Time(){
		minute=0;
		sec=0;
		}
	Time(int m,int s):minute(m),sec(s){}
	Time operator ++();
	Time operator ++(int);

	void display(){
		cout<<minute<<":"<<sec<<endl;
		}
	private:
	int minute;
	int sec;
	};
	
Time Time::operator ++(){
	if(++sec>=60){
		sec-=60;
		++minute;
		return *this;
		}
	}
	
Time Time::operator ++(int){
	Time temp(*this);
	sec++;
	if(sec>=60){
		sec-=60;
		++minute;
		}
	return temp;

	}

int main(){
	Time t1(34,59),t2;
	cout<<"time1:";
	t1.display();
	++t1;
	cout<<"++time1: ";
	t1.display();
	t2=(t1++);
	cout<<"time1++: ";
	t1.display();
	cout<<"time2++: ";
	t2.display();

	
	return 0;
	}
