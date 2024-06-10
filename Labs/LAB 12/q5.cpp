#include <iostream>
#include <fstream>
using namespace std;
int main(){
	ifstream is("story.txt");
	string line;
	int counter=0;
	cout<<"Lines in text file:"<<endl;
	while(!is.eof()){
		getline(is,line);
		cout<<'\t';
		cout<<line<<endl;
		if(line.find('A')!=0){
			counter++;
		}
	}
	cout<<"Number of lines in the text file NOT starting with A: ";
	cout<<counter<<endl;
}
