#include <iostream>
using namespace std;
class car{
	string model;
	int price;
	public:
		virtual void setprice()=0;
};
class colour:public car{
	public:
		void setprice(){
			cout<<"Colour price?"<<endl;
		}	
};
class company:public car{
	public:
		void setprice(){
			cout<<"Company price?"<<endl;
		}
};
int main(){
	company c;
	c.setprice();
	colour cl;
	cl.setprice();
}
