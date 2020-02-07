#include <iostream>
#include <cstring>
using namespace std;

class String{
	public:
	String(){p=NULL;}
	String(char *str);
	friend bool operator > (String &string1, String &string2);
	friend bool operator < (String &string1, String &string2);
	friend bool operator == (String &string1, String &string2);

	void display();
	private:
	char *p;
	};
	
String::String(char *str){
	p=str;
	}

void String::display(){
	cout<<p;
	}

bool operator > (String &s1,String &s2){
	if(strcmp(s1.p,s2.p)>0) return true;
	else return false;
	}

bool operator < (String &s1,String &s2){
	if(strcmp(s1.p,s2.p)<0) return true;
	else return false;
	}

bool operator == (String &s1,String &s2){
	if(strcmp(s1.p,s2.p)==0) return true;
	else return false;
	}

void compare(String &s1,String &s2){
	if(operator > (s1,s2)==1){
		s1.display();
		cout<<">";
		s2.display();
		}
	else if(operator < (s1,s2)==1){
		s1.display();
		cout<<"<";
		s2.display();
		}
	else if(operator == (s1,s2)==1){
		s1.display();
		cout<<"==";
		s2.display();
		}
	}

int main(){
	String string1("Hello"),string2("Book"),string3("Computer"),string4("Hello");
	compare(string1,string2);
	compare(string2,string3);
	compare(string1,string4);

	
	return 0;
	}
