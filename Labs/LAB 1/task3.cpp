#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	string name;
	float marks[5];
	float avg = 0,sum=0;
	int counter;
	std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
	cout<<"Enter student name: "<<endl;
	getline(cin,name);
	fflush(stdin);
	cout << "Enter marks: ";
	for (counter = 0; counter < 5; counter++)
	{
	cin >> marks[counter];
	sum = sum + marks[counter];
	}
	avg=sum/5;
	cout<<"Student name: "<<name<<endl;
	cout<<"Marks: ";
	for (counter = 0; counter < 5; counter++)
	cout << marks[counter] << " ";
	cout<<endl;
	cout<<"Average marks: " << avg<<endl;			
}
