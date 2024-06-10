#include <iostream>
using namespace std;
template <class T>
class find1
{
	public:
		T a[10];
		void search(const T s){
			for(int i=0;i<10;i++){
				if(a[i]==s){
					cout<<s<<" found at index "<<i<<endl;
				}
			}
}
};
int main(){
	find1<int> f;
	f.a[0]=1;
	f.a[1]=11;
	f.a[2]=12;
	f.a[3]=13;
	f.a[4]=41;
	f.a[5]=14;
	f.a[6]=15;
	f.a[7]=61;
	f.a[8]=71;
	f.a[9]=18;
	int s;
	cout<<"Enter element to find: "<<endl;
	cin>>s;
	f.search(s);
}
