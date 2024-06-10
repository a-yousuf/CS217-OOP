#include <iostream>
using namespace std;
class car{
protected:
    int price;
    string name;
public:
    virtual void set()=0;
    
};
class colour:public car{
public:
    void set(){
        cout<<"colour"<<endl;
    }
};
class comp:public car{
public:
    void set(){
        cout<<"comp"<<endl;
    }
};
int main(){
    colour l;
    l.set();
    comp c;
    c.set();
}
