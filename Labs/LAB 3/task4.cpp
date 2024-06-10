#include <iostream>
using namespace std;
class emp{
	string fname;
	string lname;
	double salary;
	public:
		void setfname(string fname){
			this -> fname = fname;
		}
		void setlname(string lname){
			this -> lname = lname;
		}
		void setsalary(double salary){
			this -> salary = salary;
		}
		string getf(){
			return fname;
		}
		string getl(){
			return lname;
		}
		double getsal(){
			return salary;
		}	
		int raise(){
			int raise= salary+(salary*0.1);
			return raise;
		}
		emp(){
			salary=0.0;	
		}
};
int main(){
	emp ob1;
	emp ob2;
	ob1.setfname("A");
	ob1.setlname("B");
	ob1.setsalary(2000);
	ob2.setfname("X");
	ob2.setlname("Y");
	ob2.setsalary(9000);
	cout<<"Employee 1"<<endl;
	cout<<"First name: "<<ob1.getf()<<endl;
	cout<<"Last name: "<<ob1.getl()<<endl;
	cout<<"Salary: "<<ob1.getsal()<<endl;
	cout<<"Salary after raise: "<<ob1.raise()<<endl;
	cout<<"Employee 2"<<endl;
	cout<<"First name: "<<ob2.getf()<<endl;
	cout<<"Last name: "<<ob2.getl()<<endl;
	cout<<"Salary: "<<ob2.getsal()<<endl;
	cout<<"Salary after raise: "<<ob2.raise()<<endl;
	
}
