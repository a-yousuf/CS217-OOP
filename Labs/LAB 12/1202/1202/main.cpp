#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream is("x1.txt");
    char* txt=new char[50];
    string line;
    getline(is,line);
    int i=0;
    cout<<line;
    for(char c:line){
        txt[i]=c;
        cout<<txt[i];
        i++;
    }
//    ofstream os("x2.txt");
//    os.write(txt, 50);
//    is.close();
//    os.close();
    cout<<"?"<<endl;
}
