#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string name;
	int atkt,ctkt,ttkt=0;
	float aprice,cprice,prcnt,gprice=0,donate=0,net=0;
	cout<<"Enter movie name: "<<endl;
	getline(cin,name);
	cout<<"Enter number of adult tickets sold: "<<endl;
	cin>>atkt;
	cout<<"Enter number of child tickets sold: "<<endl;
	cin>>ctkt;
	cout<<"Enter price of adult ticket: "<<endl;
	cin>>aprice;
	cout<<"Enter prie of child ticket: "<<endl;
	cin>>cprice;
	cout<<"Enter perentage to be donated: "<<endl;
	cin>>prcnt;
	std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
	ttkt=ctkt+atkt;
	gprice=(aprice*atkt)+(cprice*ctkt);
	donate=gprice*(prcnt/100);
	net=gprice-donate;
	cout<<"Movie name:.......................: "<<name<<endl;
	std::cout << std::right << std::setw(25)<<std::endl;
	cout<<"Number of tickets sold:...........: "<<ttkt<<endl;
	std::cout << std::right << std::setw(25)<<std::endl;
	cout<<"Gross amount:.....................: $  "<<gprice<<endl;
	std::cout << std::right << std::setw(25)<<std::endl;
	cout<<"Percentage of Gross Amount Donated: "<<prcnt<<"%"<<endl;
	std::cout << std::right << std::setw(25)<<std::endl;
	cout<<"Amount donated....................: "<<donate<<endl;
	std::cout << std::right << std::setw(25)<<std::endl;
	cout<<"Net sale..........................: $  "<<net<<endl;
}
