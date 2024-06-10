#include <iostream>
using namespace std;
void feetaniinchtomandcm(float &f,float &in){
	float m,cm;
	m=f*0.3048;
	cm=in*2.54;
	cout<<"Meter(s): "<<m<<endl;
	cout<<"Centimeter(s): "<<cm<<endl;
}
void meterandcmtofeetandinch(float m,float cm){
	float f,in;
	f = m * 3.28084;
	in = cm * 0.393701;
	cout<<"Feet: "<<f<<endl;
	cout<<"Inches: "<<in<<endl;
	
}
void choices(){
	int ch;
	cout<<"1) Feet and inches to meters and centimeters."<<endl;
	cout<<"2) Meters and centimeters to feet and inches."<<endl;
	cout<<"Enter 1 or 2"<<endl;
}
int main(){
	int run=1,ch;
	float f,in,m,cm;
	while(run==1){
		choices();{
			cin>>ch;
			if(ch==1){
				cout<<"Feet and inches to meters and centimeters."<<endl;
				cout<<"Enter feet: ";
				cin>>f;
				cout<<"Enter inches: ";
				cin>>in;
				feetaniinchtomandcm(f,in);
				cout<<"Press 1 to continue. ";
				cin>>run;
			}
			else if(ch==2){
				cout<<"Meters and centimeters to feet and inches."<<endl;
				cout<<"Enter meters: ";
				cin>>m;
				cout<<"Enter centimeters: ";
				cin>>cm;
				meterandcmtofeetandinch(m,cm);
				cout<<"Press 1 to continue. ";
				cin>>run;
			}
			else{
				cout<<"Error try again."<<endl;
			}
		}
	}
}

