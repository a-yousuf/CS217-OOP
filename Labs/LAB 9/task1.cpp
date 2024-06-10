#include <iostream>
using namespace std;
class A{
	int x;
	public:
		A(int x){
			this-> x=x;
		}
		void display(){
			cout<<x<<endl;
		}
		void operator --(){
			x=x*4;
		}
		void operator --( int){
			x=x/4;
		}
};
int main(){
	A a(5);
	--a;
	a.display();
	a--;
	a.display();
}

