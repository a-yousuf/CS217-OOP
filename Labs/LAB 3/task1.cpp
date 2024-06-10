#include <iostream>
using namespace std;
class task{
	int age;
	string name;
	public:
	void setage(int age){
		this-> age = age;
	}
	int getage(){
		return age;
	}
	void setname(string name){
		this-> name = name;
	}
	string getname(){
		return name;
	}
	};
int main(){
	task obj1;
	obj1.setage(24);
	obj1.setname("Abdullah");
	cout<<"My name is "<<obj1.getname()<<endl;
	cout<<"My age is "<<obj1.getage()<<endl;
}
	
	
	
