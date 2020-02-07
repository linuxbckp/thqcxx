#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	void sort(int &,int &,int &);
		cout<<"please enter 3 integer:";
		cin>>a>>b>>c;
		sort(a,b,c);
		cout<<"second code is "<<a<<" "<<b<<" "<<c<<endl;
		
		
	return 0;
	}
void sort(int &i,int &j,int &k){
	void change(int &, int &);
	if(i>j) change(i,j);
	if(i>k) change(i,k);
	if(j>k) change(j,k);
	
	}
void change(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	}
