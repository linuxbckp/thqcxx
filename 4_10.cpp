#include <iostream>
using namespace std;
template<typename T>
T max(T a,T b,T c){
	if(b>a) a=b;
	if(c>a) a=c;
	return a;
	}
int main(){
	int i1=15,i2=-76,i3=567,i;
	double d1=56.87,d2=90.23,d3=-3214.78,d;
	long l1=67854,l2=-913456,l3=673456,l;
	i=max(i1,i2,i3);
	d=max(d1,d2,d3);
	l=max(l1,l2,l3);
	cout<<"i_max="<<i<<endl;
	cout<<"d_max="<<d<<endl;
	cout<<"l_max="<<l<<endl;
	
	return 0;
	}
