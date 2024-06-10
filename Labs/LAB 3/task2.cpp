#include <iostream>
using namespace std;
class date{
	int dd,mm,yy;
	public:
		void setmonth(int mm){
			this -> mm=mm;
		}
		void setday(int dd){
			this -> dd=dd;
		}
		void setyear(int yy){
			this -> yy=yy;
		}
		int getmonth(){
			return mm;
		}
		int getyear(){
			return yy;
		}
		int getday(){
			return dd;
		}
};
int main(){
	int dd,mm,yy;
	date d;
	cout<<"Enter day: "<<endl;
	cin>>dd;
	d.setday(dd);
	cout<<"Enter month: "<<endl;
	cin>>mm;
	d.setmonth(mm);
	cout<<"Enter year: "<<endl;
	cin>>yy;
	d.setyear(yy);
	cout<<d.getday()<<"/"<<d.getmonth()<<"/"<<d.getyear();
}
