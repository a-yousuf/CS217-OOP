#include <iostream>
using namespace std;
class shape{
	int x,y;
	public:
		shape(int x,int y){
			this->x=x;
			this->y=y;
		}
		shape(){
		}
		int area(){
			return x*y;
		}
		shape operator +(const shape& s){
			shape temp;
			temp.x=x+s.x;
			temp.y=y+s.y;		
			return temp;
		}
//		int getarea(){
//			return area;
//		}
};
int main(){
	shape s1(5,5);
	cout<<s1.area()<<endl;
	shape s2(6,6);
	cout<<s2.area()<<endl;
	shape s3;
	s3=s1+s2;
	cout<<s3.area()<<endl;
}
