#include<iostream>
using namespace std;
void pserv(int accno)
{	
	float min, dmin, nmin;
	float fee, dfee=0, nfee=0;
	cout<<"Enter minutes used from 6am to 6pm: "<<endl;
	cin>>dmin;
	cout<<"Enter minutes used from 6pm to 6am: "<<endl;
	cin>>nmin;
	
	if (nmin>100)
		nfee =((nmin-100)*.05);
	 
	else if (dmin>75)
		dfee =((dmin-75)*0.1);
	
		
	min=dmin+nmin;	
	
	fee = 25.00+dfee+nfee;
	cout<<"Account Number :"<<accno<<endl;
	cout<<"Type: Premium "<<endl;	
	cout<<"Number of minutes: "<<min<<endl;	
	cout<<"Due amount :"<<fee;	
		
}
void rserv(int accno)
{	
	float min;
	float fee;
	cout<<"Enter number of minutes: "<<endl;
	cin>>min;
	if (min>50)
		fee =10.00+((min-50)*0.2);
	else
		fee =10.00;
	cout<<"Account Number:"<<accno<<endl;
	cout<<"type: Regular "<<endl;	
	cout<<"Number of minutes: "<<min<<endl;	
	cout<<"Due amount:"<<fee;	
	
}
int main()
{
	int accno;
	char code;
	
	cout<<"Enter Account Number:"<<endl;
	cin>>accno;
	cout<<"Enter Service Code:"<<endl;
	cin>>code;
	if(code=='R' || code=='r'){
		rserv(accno);
	}
	else if(code=='P' || code=='p'){
		pserv(accno);
	}
}













