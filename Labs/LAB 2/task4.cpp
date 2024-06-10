#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.142
float dist(float x1,float x2,float y1,float y2){
	float dist;
	dist = sqrt((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
	return dist;
}
float rad(float cx,float cy,float x,float y){
	float rad;
	rad= (dist(x,cx,y,cy));
	return rad;
}
float circumference(float rad){
	float c;
	c=(rad*pi*2);
	return c;
}
float area(float rad){
	float area;
	area=(rad*pi*2);
	return area;
}
int main(){
	float x1,x2,y1,y2,cx,cy,x,y;
	cout<<"Enter the x coordinate of first point: "<<endl;
	cin>>x1;
	cout<<"Enter the y coordinate of first point: "<<endl;
	cin>>y1;
	cout<<"Enter the x coordinate of second point: "<<endl;
	cin>>x2;
	cout<<"Enter the x coordinate of second point: "<<endl;
	cin>>y2;
	cout<<"Distance between the two points: "<<dist(x1,x2,y1,y2)<<endl;
	cout<<"Enter the x coordinate of circle center: "<<endl;
	cin>>cx;
	cout<<"Enter the y coordinate of circle center: "<<endl;
	cin>>cy;
	cout<<"Enter the x coordinate of any point on the circle: "<<endl;
	cin>>x;	
	cout<<"Enter the y coordinate of any point on the circle: "<<endl;
	cin>>y;
	cout<<"Radius: "<<rad(cx,cy,x,y)<<endl;
	cout<<"Circumference: "<<circumference(rad(cx,cy,x,y))<<endl;
	cout<<"Area: "<<area(rad(cx,cy,x,y))<<endl;
}
