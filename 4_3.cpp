#include <iostream>
using namespace std;//本程序由Linux编程科普友情提供
int main(){
	float add(float x, float y);
	float a,b,c;
	cout<<"please enter a b:";
	cin>>a>>b;
	c=add(a,b);
	cout<<"sum="<<c<<endl;
	return 0;
	}
float add(float x, float y){
	float z;
	z=x+y;
	return z;
	}
