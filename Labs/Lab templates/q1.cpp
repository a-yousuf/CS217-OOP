#include <iostream>
using namespace std;
template <class T>
T s(T &a,T &b){
	swap(a,b);
	// :)
}
int main(){
	int x=5,y=7;
	cout<<"Before function."<<endl;
	cout<<"\tx: "<<x<<endl;
	cout<<"\ty: "<<y<<endl;
	s(x,y);
	cout<<"After function."<<endl;
	cout<<"\tx: "<<x<<endl;
	cout<<"\ty: "<<y<<endl;
	
}
