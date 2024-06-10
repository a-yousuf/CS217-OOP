#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i,choice,num,x=0,y=0;
	double tax=0,sum=0,final=0;
	struct menuitemtype{
	string menuitem;
	double menuprice;
	};
	std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
	struct menuitemtype menulist[]={{"Plain eggs ", 1.45},{"Bacon and Egg" ,2.45},{"Muffin",0.99},{"French Toast", 1.99},{"Fruit Basket", 2.49},{"Cereal", 0.69},{"Coffee", 0.50},{"Tea", 0.75}
	}; 
	cout<<"  MENU  "<<endl;
	for (i = 0; i< 7;i++){
		printf("%d. ",i+1);
		cout<<menulist[i].menuitem;
		std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[i].menuprice<<endl;
	}
	cout<<"Enter number of items: "<<endl;
	cin>>num;
	if(num<1 || num>8){
		cout<<"Error"<<endl;
	}
	else{
		for(i=0;i<num;i++){
		cout<<"Enter your choice : "<<endl;
		cin>>choice;
		x=x+choice;
		x*=10;
		switch(choice){
			case 1:{
			cout <<  menulist[0].menuitem ;
			sum= sum+ menulist[0].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
			cout<<menulist[0].menuprice<<endl;
			break;
		}
		case 2:{
			cout <<  menulist[1].menuitem ;
			sum= sum+ menulist[1].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[1].menuprice<<endl;
			break;
		}
		case 3:{
			cout <<  menulist[2].menuitem ;
			sum= sum+ menulist[2].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[2].menuprice<<endl;
			break;
		}
		case 4:{
			cout <<  menulist[3].menuitem ;
			sum= sum+ menulist[3].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[3].menuprice<<endl;
			break;
		}
		case 5:{
			cout <<  menulist[4].menuitem;
			sum= sum+ menulist[4].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[4].menuprice<<endl;
			break;
		}
		case 6:{
			cout <<  menulist[5].menuitem ;
			sum= sum+ menulist[5].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[5].menuprice<<endl;
			break;
		}
		case 7:{
			cout <<  menulist[6].menuitem;
			sum= sum+ menulist[6].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[6].menuprice<<endl;
			break;
		}
		case 8:{
			cout <<  menulist[7].menuitem ;
			sum= sum+ menulist[7].menuprice;
			std::cout << std::right << std::setw(25)<<std::endl;
		cout<<menulist[7].menuprice<<endl;
			break;
		}
		default:{
			cout<<"Error"<<endl;
			break;
		}
	}
}
	}
	tax=sum*0.05;
	final=sum+tax;
	cout<<"Bill"<<endl;
	cout<<"Tax: "<<tax<<endl;
	cout<<"Amount due: "<<final<<endl;
}

