#include <iostream>
using namespace std;
class Box{
	public:
	Box(int h=10,int w=10,int len=10):height(h),width(w),length(len){}
	int volume();
		private:
	int height;
	int width;
	int length;
	};
	
	
int Box::volume(){
	return (height*width*length);
	}

int main(){
	Box a[3]={
		Box(101,2,15),
		Box(15,18,20),
		Box(16,20,26)
		};
	cout<<"the volume is "<<a[0].volume()<<endl;//本程序由Linux编程科普友情提供
	cout<<"the volume2 is "<<a[1].volume()<<endl;
	cout<<"the volume3 is "<<a[2].volume()<<endl;
	return 0;
	}
