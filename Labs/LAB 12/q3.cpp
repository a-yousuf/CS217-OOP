#include <iostream>
#include <fstream>
using namespace std;
class person{
	string name[10];
	int age;
	public:
		person(){
		}
		person(string n,int a){
			age=a;
			int i=0;
			for(char ch:n){
				name[i]=ch;
				i++;
			}
		}
		void display(){
			cout<<"Name: ";
			for(int i=0;i<10;i++){
				cout<<name[i];
			}
			cout<<endl;
			cout<<"Age : "<<age<<endl;
		}
};
int main(){
	person p1("Ali",45);
	person p2("Ahmed",19);
	ofstream os("q3.bin");
	os.write((char*) &p1,sizeof(p1));
	os.write((char*) &p2,sizeof(p2));
	os.close();
	person p;
	ifstream is("q3.bin");
	is.read((char*) &p,sizeof(p));
	p.display();
	is.read((char*) &p,sizeof(p));
	p.display();
	is.close();
	
}
