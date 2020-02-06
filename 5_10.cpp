#include <iostream>
#include <cstring>
using namespace std;

void smallest_string(char str[][30], int i){
	int ii;
	char string[30];
	strcpy(string,str[0]);
	for (ii=0;ii<i;ii++)
	if(strcpy(str[ii],string)<0) strcpy(string,str[ii]);
	cout<<endl<<"the smallest string is:"<<string<<endl;
	}

int main(){
	int i;
	char country_name[3][30];
	for(i=0;i<3;i++){
		cin>>country_name[i];
		}
	smallest_string(country_name,3);
	
	return 0;
	}
