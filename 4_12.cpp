#include <iostream>
using namespace std;
int f(int a){
	int b=0;
	static int c=3;
	b=b+1;
	c=c+1;
	return b+c+a;
	}
int main(){
	int a=2,i;
	for(i=0;i<3;i++){
		cout<<f(a)<<" ";
		}
	cout<<endl;
	return 0;
	}
