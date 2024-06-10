#include <iostream>
using namespace std;
class printClass;
class perimeter{
	int l,b;
		int calcperimeter(){
			return l+l+b+b; 
		}
	public:
		friend class printClass;
		perimeter(int len,int br){
			l=len;
			b=br;
		}
};
class printClass{
	public:
		void display( perimeter& p){
			cout<<p.calcperimeter()<<endl;
		}
};
int main(){
	perimeter p1(5,6);
	printClass c1;
	c1.display(p1);
}
