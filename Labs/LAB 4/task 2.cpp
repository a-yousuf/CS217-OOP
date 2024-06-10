#include <iostream>
#include <math.h>
using namespace std;
class acc{
	string accno;
	float bal;
	public:
	acc(float bal){
		this->bal=bal;
	}
	float withdraw(float w){
		cout<<"Withdrawing: "<<w<<endl;
		bal=bal-w;
		getbal();
		return bal;
	}
	float deposit(float d){
		bal=bal+d;
		cout<<"Deposited: "<<d<<endl;
		getbal();
		return bal;
	}
	void getbal(){
		cout<<"Current balance: "<<bal<<endl;
	}
};
int main(){
	acc obj1(15000);
	obj1.getbal();
	obj1.withdraw(200);
	obj1.deposit(500);
	
}
