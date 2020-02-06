#include <iostream>
using namespace std;
int main(){
	int max_value(int, int);
	int i,j,row=0,column=0,max;
	int a[3][4]={{5,12,23,56},{19,28,37,46},{-12,-34,6,8}};
	max=a[0][0];
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
			max=max_value(a[i][j],max);
			if(max==a[i][j]){
				row=i;
				column=j;
				}
			
			}
		}
	cout<<"max="<<max<<",row="<<row<<",column="<<column<<endl;
	
	return 0;
	}
int max_value(int x,int max){
	if(x>max) return x;
	else return max;
	}
