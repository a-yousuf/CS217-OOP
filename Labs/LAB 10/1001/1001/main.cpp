#include <iostream>
using namespace std;
class shape{
public:
    virtual void area()=0;
};
class tri:virtual public shape{
    int b,h;
public:
    tri(int b=0,int h=0){
        this->b=b;
        this->h=h;
    }
    void area(){
        cout<<0.5*b*h<<endl;
    }
};
int main(){
    tri t(4,3);
    t.area();
}
