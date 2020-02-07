#include <string>
#include <iostream>
#include <cstring>
using namespace std;

class Student{
	public:
	Student(int n,string nam,char s){
		num=n;
		//name=nam;
		sex=s;
		cout<<"Construct called"<<endl;
		
		}
	~Student(){
		cout<<"Desturct called;"<<endl;
		}
	void display(){
		cout<<"num= "<<num<<endl;
		cout<<"name= "<<name<<endl;
		cout<<"sex= "<<sex<<endl;
		}
	private:
	int num;
	char name[10];
	char sex;
	};

int main(){
	Student stud1(10010, " ",'f');
	stud1.display();
	Student stud2(10011, " ",'m');
	stud2.display();
	return 0;
	}
