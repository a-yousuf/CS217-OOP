#include <iostream>
using namespace std;
void bfunc(int);
void rfunc(int);
int main(){
	int accno;
	char code;
	cout<<"Enter account number: "<<endl;
	cin>>accno;
	cout<<"For residential enter r or R For business enter b or B: "<<endl;
	cin>>code;
	if(code=='b'||code=='B'){
		bfunc(accno);
	}
	else if(code=='r'||code=='R'){
		rfunc(accno);
	}
	else{
		cout<<"Error"<<endl;
	}
}
void rfunc(int accno){
	int no;
	float fee=0;
	cout<<"Enter number of premium channels: "<<endl;
	cin>>no;
	fee=4.5+20.5+(no*7.5);
	cout<<"Account number: "<<accno<<endl;
	cout<<"Billing amount: "<<fee<<endl;
}

void bfunc(int accno){
	int no,con;
	float fee=0,pr=0;
	cout<<"Enter number of premium channels: "<<endl;
	cin>>no;
	cout<<"Enter number of connections:  "<<endl;
	cin>>con;
	if(con<=10){
		pr=75;
		fee=15+pr+(50*no);
	}
	else if(con>10){
		pr=75+(5*con);
		fee=pr+15+(50*no);
	}
	cout<<"Account number: "<<accno<<endl;
	cout<<"Billing amount: "<<fee<<endl;
	
	
}
