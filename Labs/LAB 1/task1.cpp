#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float kg,lb;
	cout<<"Enter weight in kg: "<<endl;
	cin>>kg;
	lb=kg*2.2;
	std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
    cout<<"Weight in kgs: "<<kg<<endl;
	cout<<"Weight in lbs: "<<lb<<endl;
	
}
