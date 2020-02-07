#include <iostream>
using namespace std;
template<class numtype>

class Compare{
	public:
	Compare(numtype a,numtype b){
		x=a;y=b;
		}
		
	numtype max(){
		return (x>y)?x:y;
		}
		
	numtype min(){
		return (x<y)?x:y;
		}
		
	private:
	numtype x,y;
	};

int main(){
	Compare<int> cmpl(3,7);
	cout<<cmpl.max()<<"is the Maximum. "<<endl;
	cout<<cmpl.min()<<"is the Minimum. "<<endl;
	Compare<float> cmpl2(45.67,56.78);
	cout<<cmpl2.max()<<"is the Maximum. "<<endl;
	cout<<cmpl2.min()<<"is the Minimum. "<<endl;
	Compare<char> cmpl3('a','c');
	cout<<cmpl3.max()<<"is the Maximum. "<<endl;
	cout<<cmpl3.min()<<"is the Minimum. "<<endl;
	return 0;
	}
