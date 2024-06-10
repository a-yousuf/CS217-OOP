#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream o("x1.txt");
    string in;
    cout<<"Enter text: "<<endl;
    cin>>in;
    int si=in.size();
    char* txt= new char[15];
    int i=0;
    for(char c:in){
        txt[i]=c;
        i++;
    }
    o.write(txt, si);
    o.close();
    ifstream is("x1.txt");
    char* r=new char[si];
    is.read(r, si);
    for(i=0;i<si;i++){
        cout<<r[i];
    }
    is.close();
}
