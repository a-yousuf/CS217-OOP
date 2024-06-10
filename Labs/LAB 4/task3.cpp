#include <iostream>
#include <math.h>
using namespace std;
class invoice{
	string partno;
	string description;
	int quantity;
	double price;
	public: 
	invoice(string partno,string description,int quantity,double price){
		this -> partno=partno;
		this -> description = description;
		this -> quantity = quantity;
		this -> price = price;
	}
	void getinvoice(){
		double bill;
		bill=price*quantity;
		cout<<"Part number: "<<partno<<endl;
		cout<<"Description: "<<description<<endl;
		cout<<"Quantity: "<<quantity<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Bill: "<<bill<<endl;
	}
};
int main(){
	invoice obj1("101","Item",5,20);
	obj1.getinvoice();
}
