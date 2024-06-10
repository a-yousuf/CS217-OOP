#include <iostream>
using namespace std;
class vehicle{
	protected:
	string type;
	string model;
	string colour;
	int year;
	double miles;
	public:
		virtual void display()=0;
		vehicle(){
		}
		vehicle(string t,string m,string c,
		int y,double mi){
			type=t;
			model=m;
			colour=c;
			year=y;
			miles=mi;
		}
};
class gasv:virtual public vehicle{
	protected:
	int tanksize;
	public:
		gasv(){
		}
		gasv(int ts){
			tanksize=ts;
		}
		gasv(string t,string m,string c,
		int y,double mi,int ts)
		:vehicle(t,m,c,y,mi){
			tanksize=ts;
		}
};
class electricv:virtual public vehicle{
	protected:
	int energy;
	public:
		electricv(){
		}
		electricv(int e){
			energy=e;
		}
		electricv(string t,string m,string c,
		int y,double mi,int e)
		:vehicle(t,m,c,y,mi){
			energy=e;
		}
	
};
class highperformance:virtual public gasv{
	protected:
	int hp;
	int topspeed;
	public:
		highperformance(){
		}
		highperformance(int hp,int tpsd){
			topspeed=tpsd;
			this->hp=hp;
		}
		highperformance(string t,string m,string c,
		int y,double mi,int ts,int hp,int tspd):
			vehicle(t,m,c,y,mi),gasv(ts){
				this->hp=hp;
				topspeed=tspd;
			}
};
class heavyvehicle:virtual public gasv,
virtual public electricv{
	protected:
	int maxw;
	int nowheels;
	int l;
	public:
		heavyvehicle(){
		}
		heavyvehicle(int mx,int nw,int l){
			maxw=mx;
			nowheels=nw;
			this->l=l;
		}
		heavyvehicle(string t,string m,string c,
		int y,double mi,int ts,int e,int mx,
		int nw,int l)
		:vehicle(t,m,c,y,mi),gasv(ts),electricv(e){
			maxw=mx;
			nowheels=nw;
			this->l=l;
		}
};
class bus:public heavyvehicle{
	int seatno;
	public:
		bus(){
		}
		bus(string t,string m,string c,
		int y,double mi,int ts,int e,int mx,
		int nw,int l,int seats)
		:vehicle(t,m,c,y,mi),gasv(ts),electricv(e),
		heavyvehicle(mx,nw,l){
			seatno=seats;
		}
		void display(){
			cout<<"Type: "<<type<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Colour: "<<colour<<endl;
			cout<<"Year: "<<year<<endl;
			cout<<"Miles driven: "<<miles<<"mi"<<endl;
			cout<<"Tank size: "<<tanksize<<endl;
			cout<<"Energy storage: "<<energy<<"kW/h"<<endl;
			cout<<"Max weight: "<<maxw<<"kg"<<endl;
			cout<<"Num of wheels: "<<nowheels<<endl;
			cout<<"Length: "<<l<<"m"<<endl;
			cout<<"Num of seats: "<<seatno<<endl;
		}
};
class sportscar: virtual public highperformance{
	string gear;
	public:
		sportscar(){
		}
		sportscar(string t,string m,string c,
		int y,double mi,int ts,int hp,int tspd,string gear):
			vehicle(t,m,c,y,mi),gasv(ts){
				this->gear=gear;
			}
		
};
int main(){
	bus b1("Type","Model","Colour",2002,123.45f,200
	,400,2000,20,12,24);
	b1.display();
	return 0;
}
