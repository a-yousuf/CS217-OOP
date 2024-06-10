#include <iostream>
using namespace std;
class person{
	public:
		virtual void getdata(int,int)=0;
		virtual void display()=0;
		virtual int bonus()=0;
};
class admin:public person{
	int id,salary;
	public:
		void getdata(int i,int s){
			id=i;
			salary=s;
		}
		void display(){
			cout<<"ID: "<<id<<endl;
			cout<<"Bonus: "<<bonus()<<endl;
		}
		int bonus(){
			int b;
			b=salary*1.05;
			return b;
		}
};
class accountant:public person{
	int pass;
	int salary;
	public:
		void getdata(int p,int s){
			pass=p;
			salary=s;
		}
		void display(){
			cout<<"Password: "<<pass<<endl;
			cout<<"Bonus: "<<bonus()<<endl;
		}
		int bonus(){
			int b;
			b=salary*1.08;
			return b;
		}
};
int main(){
	admin a;
	a.getdata(151,900);
	a.bonus();
	a.display();
	cout<<endl<<endl<<endl;
	accountant n;
	n.getdata(786768,987);
	n.display();
	person * p; // base class pointer
//	p= new admin;
//	p= new accountant;
}
