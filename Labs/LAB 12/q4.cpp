#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class part{
	int id,score;
	char name[10];
		public:
		Participant(){
		}
		int getid(){
			return id;
		}
		int getscore(){
			return score;
		}
		string getname(){
			return name;
		}
		void display(){
			cout << "ID : " << id << endl;
			cout<<"Name: ";
			for(int i=0;i<10;i++){
				cout<<name[i];
			}
			cout<<endl;
			cout << "Score : " << score << endl;
		}
		void setdata(int id, char n[], int score){
			this->id=id;
			strcpy(name,n);
			this->score=score;
		}
		void input(){
			int id, score;
			string name;
			part p1,p2,p3;
			ofstream os("q4.dat");
			p1.setdata(1001,"Abc",50);
			p2.setdata(1002,"Bca",100);
			p3.setdata(1003,"Cba",80);
			os.write((char*)&p1, sizeof(p1));
			os.write((char*)&p2, sizeof(p2));
			os.write((char*)&p3, sizeof(p3));
			os.close();
		}
		void output(int id){
			part p;
			ifstream is("q4.dat");
			is.read((char*)&p, sizeof(p));
			
			while(!is.eof()){	
				if(p.getid()==id){
					p.display();
				}
				is.read((char*)&p, sizeof(p));
			}
			is.close();
		}
		void max(){
			int max=0;
			string name;
			part p;
			ifstream is("q4.dat");
			is.read((char*)&p, sizeof(p));
			
			while(!is.eof()){	
				if(p.getscore()>max){
					max=p.getscore();
					name= p.getname();
				}
				is.read((char*)&p, sizeof(p));
			}
			is.close();
			cout << "MAX score: " << max << " Name : " << name << endl;
		}

};
int main(){
	int id;
	part p;
	p.input();
	cout << "Enter ID : " ;
	cin >> id;
	p.output(id);
	p.max();
}
