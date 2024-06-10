#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	ifstream is("test1.txt");
	ofstream os("test2.txt");
	int i=0,num=0,loop=1;
	string test1;
	char* txt=new char[50];
	getline(is,test1);
	cout<<"Text in current file: "<<endl;
	for(char c:test1){
		txt[i]=c;
		cout<<txt[i];
		i++;
	}
	cout<<endl;
	is.close();
	i=0;
	cout<<"Text in encrypted file: "<<endl;
	while(loop==1){
		if(txt[i]>=49&&txt[i]<=57){
			if(txt[i+1]>=48&&txt[i+1]<=57){
				num=txt[i]-48;
				num=(txt[i+1]-48)+(num*10);
				i+=1;
			}
			else{
				num=txt[i]-48;
			}
			char alp=64;
			if(num>26||num<1){
				alp=90;
			}
			else{
				alp=alp+num;
			}
			cout<<alp;
			os.put(alp);
			
		}
		i++;
		if(txt[i]=='\0')
		loop=0;
	}
	os.close();
}
