#include <iostream>
#include <fstream>
using namespace std;
int main(){
	//copying string in q1.txt.
	ifstream is("q1.txt");
	char* txt=new char[50];
	char c;
	int i=0;
	while(!is.eof()){
		is.get(c);
		txt[i]=c;
		i++;
	}
	ofstream os("q2.txt");
	os.write(txt,i);
	is.close();
	os.close();
}
