#include <iostream>
using namespace std;
class employee{
	protected:
	string name;
	string code;
	public:
		virtual void display()=0;
		employee(){
			
		}
		employee(string name,string code){
			this->name=name;
			this->code=code;
		}
};
class consultant:virtual public employee{
	protected:
	int years;
	public:
		consultant(){
		}
		consultant(int years){
			this->years=years;
		}
		consultant(string name,string code,int years)
		:employee(name,code){
			this->years=years;
		}
};
class manager:virtual public employee{
	protected:
	int no;
	public:
		manager(){
			
		}
		manager(int no){
			this->no=no;
		}
		manager(string name,string code,int no)
		:employee(name,code){
			this->no=no;
		}
};
class consmanager:public manager,public consultant{
	public:
		consmanager(string name,string code,int years,int no)
		:employee(name,code),manager(no),consultant(years){
			
		}
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Code: "<<code<<endl;
		cout<<"Years of exp: "<<years<<endl;
		cout<<"No of teams: "<<no<<endl;
	}
};
int main(){
	consmanager c1("Ali","S-123",17,5);
	c1.display();
	return 0;
	
}
