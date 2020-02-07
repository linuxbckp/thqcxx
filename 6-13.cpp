#include <iostream>
using namespace std;
int main(){
	char** p;
	char* name[]={"basic","fortran","c++","pascal","cobol"};
	p=name+2;
	cout<<*p<<endl;
	cout<<**p<<endl;
	return 0;
	}
