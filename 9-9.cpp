#include <iostream>
using namespace std;
class Box{
	public:
	Box(int h=10,int w=10,int len=10);
	int volume();
		private:
	int height;
	int width;
	int length;
	};
	
Box::Box(int h,int w,int len){
	height=h;
	width=w;
	length=len;
	}
	
int Box::volume(){
	return (height*width*length);
	}

int main(){

	Box box(15,30,25);
	cout<<"the volume1 is "<<box.volume()<<endl;
	Box box2=box;
	cout<<"the volume2 is "<<box2.volume()<<endl;
	return 0;
	}
