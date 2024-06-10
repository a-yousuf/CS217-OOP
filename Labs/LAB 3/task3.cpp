#include <iostream>
using namespace std;
class glass{
	public:
		int LiqLvl=200;
		void drink(int mm){
			LiqLvl= LiqLvl-mm;
		}
		void refill(){
			if(LiqLvl<100){
				LiqLvl=200;
				cout<<"Drink refilled. ";
			}
			else{
				cout<<"More than half.";
			}
		}
};
int main(){
	glass obj1;
	int mm;
	cout<<"How much have you drank? (in mm) "<<endl;
	cin>>mm;
	obj1.drink(mm);
	obj1.refill();
	
}
