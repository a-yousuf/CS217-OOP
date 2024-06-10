#include <iostream>
using namespace std;
class shape{
	public:
		virtual int area()=0;
};
class rec: public shape{
	int l,h;
	public:
		rec(int len,int height){
			l=len;
			h=height;
		}
		int area(){
			return l*h;
		}
};
class square:public shape{
	int s;
	public:
		square(int s){
			this->s=s;
		}
		int area(){
			return s*s;
		}
	
};
int main(){
	rec r1(9,8);
	cout<<r1.area()<<endl;
	square s1(8);
	cout<<s1.area()<<endl;
}
