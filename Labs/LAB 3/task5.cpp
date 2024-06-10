#include <iostream>
using namespace std;
class book{
	string name,isbn,a_name,publisher;
	public:
	void setname(string name){
		this -> name=name;
	}
	void setisbn(string isbn){
		this -> isbn=isbn;
	}
	void seta_name(string a_name){
		this -> a_name=a_name;
	}
	void setpub(string publisher){
		this -> publisher=publisher;
	}
	string gname(){
		return name;
	}
	string gisbn(){
		return isbn;
	}
	string gauthor(){
		return a_name;
	}
	string gpublisher(){
		return publisher;
	}
	void getbookinfo(){
		cout<<"Book name: "<<gname()<<endl<<"Book isbn: "<<gisbn()<<endl<<"Book author: "<<gauthor()<<endl<<"Book publisher: "<<gpublisher()<<endl;
	}

};
int main(){
	book b1;
	b1.setname("Book");
	b1.setisbn("000191828");
	b1.seta_name("Me");
	b1.setpub("Not me");
	b1.getbookinfo();
	
	
}
