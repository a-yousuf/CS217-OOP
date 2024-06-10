#include <iostream>
#include <math.h>
using namespace std;
struct menu{
	string name;
	char type;
	double price;
};
class coffeeshop{
	string name;
	menu m[3]={{"Cake",'f',5},{"Water",'d',1.2},{"Coffee",'d',2.3}};
	string order[3];
	public:
	void fullfil(){
		cout<<"ORDER FULLFILLED!!!"<<endl;
	}
	void foodonly(){
		int i;
		string food;
		cout<<"Food items: "<<endl;
		for(i=0;i<3;i++){
			if(m[i].type=='f'){
				food=m[i].name;
				cout<<food<<endl;
			}
		}
	}
	void drinkonly(){
		int i;
		string drink;
		cout<<"Drink items: "<<endl;
		for(i=0;i<3;i++){
			if(m[i].type=='d'){
				drink=m[i].name;
				cout<<drink<<endl;
			}
		}
	}
	void cheapest(){
		int i;
		string cheap;
		for(i=0;i<3;i++){
			if(m[i].price<m[i+1].price && m[i].price<m[i+2].price){
				cheap=m[i].name;
				cout<<"Cheapest item: "<<cheap<<endl;
			}
			else if(m[i+1].price<m[i].price && m[i+1].price<m[i+2].price){
				cheap=m[i+1].name;
				cout<<"Cheapest item: "<<cheap<<endl;
			}
		}
	}
	double due(){
		int i;
		double amount;
		for(i=0;i<3;i++){
			amount=amount+m[i].price;
		}
		return amount;
	}
	void listorder(){
		cout<<"Your order: "<<endl;
		int i;
		for(i=0;i<3;i++){
			cout<<m[i].name<<endl;
		}
	}
	void addorder(){
		int i;
		for(i=0;i<5;i++){
			order[i]=m[i].name;
		}
	}
};
int main(){
	coffeeshop obj1;
//	obj1.addorder();
	obj1.foodonly();
	obj1.drinkonly();
	obj1.cheapest();
	obj1.fullfil();
	obj1.listorder();
	cout<<"Due amount: "<<obj1.due()<<endl;
}
