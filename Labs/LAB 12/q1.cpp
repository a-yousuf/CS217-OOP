#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string input;
	cout<<"Enter a string: "<<endl;
	cin>>input;
	int s=0;
	s=input.size();
	int i=0;
	char* txt= new char[s];
	for(char c:input ){
		txt[i]=c;
		i++;
	}
	ofstream os("q1.txt");
	os.write(txt,s);
	cout<<"Storing string in file."<<endl;
	os.close();
	ifstream is("q1.txt");
	char* read= new char[s];
	is.read(read,s);
	cout<<"Reading from file."<<endl;
	for(i=0;i<s;i++){
		cout<<read[i];
	}
	is.close();
}
