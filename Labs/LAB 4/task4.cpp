#include <iostream>
#include <math.h>
using namespace std;
class book{
	string author;
	string title;
	double price;
	int stock;
	string pub;
	public:
		book(string title,string author){
			this -> title=title;
			this -> author=author;
			price=50;
			stock=2;
		}
		void check(string title){
			int q;
			if(title=="A"){
				cout<<"Enter required copies: "<<endl;
				cin>>q;
				if(stock>=q){
					cout<<"Price: "<<(price*q)<<endl;
				}
				else{
					cout<<"Not in stock."<<endl;
				}
			}
			else{
				cout<<"Not in stock."<<endl;
			}
		}
};
int main(){
	book obj1("A","B");
	obj1.check("A");
	book obj2("F","B");
	obj1.check("F");
}
