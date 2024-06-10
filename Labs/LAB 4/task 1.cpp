#include <iostream>
#include <math.h>
using namespace std;
class circle{
	float r;
	public:
	circle(float r){
		this -> r=r;
	}
	float getarea(){
		float area;
		area=3.142*pow(r,2);
		return area;
	}
	float getperimeter(){
		float p;
		p=2*3.142*r;
		return p;
	}
};
int main(){
	float r;
	cout<<"Enter radius: ";
	cin>>r;
	circle obj1(r);
	cout<<"Area: "<<obj1.getarea()<<endl;
	cout<<"Perimeter: "<<obj1.getperimeter()<<endl;
}
