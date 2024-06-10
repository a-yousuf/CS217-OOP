#include <iostream>>
using namespace std;
string manga[10]={"manga1","manga2","manga3","manga4","manga5","manga6","manga7","manga8","manga9","manga10"};
string comics[10]={"c1","c2","c3","c4","c5","c6","c7","c8","c9","c10"};
string study[10]={"s1","s2","s3","s4","s5","s6","s7","s8","s9","s10"};
class reader{
	double fee;
	string top[3];
	public:
		virtual void read()=0;
		virtual void display()=0;	
		void top3(){
			for(int i=0;i<3;i++){
				cout<<"Enter book "<<i+1<<": "<<endl;
				cin>>top[i];
			}
		}
};
class mangaworm: virtual public reader{
	static int num;
	double fee=800.5;
	int check=1;
	public:
		mangaworm(){
			
		}
		double getfee(){
			return fee;
		}
		int getcheck(){
			return check;
		}
		void display(){
			cout<<"Available mangas:"<<endl;
			for(int i=0;i<10;i++){
				cout<<manga[i]<<endl;
				}
			}
		void read(){
				string book;
				int rate;
				cout<<"Enter a manga to read: "<<endl;
				cin>>book;
				for(int i=0;i<10;i++){
					if(book==manga[i]){
						cout<<"You read: "<<book<<endl;
						num++;
						cout<<"Please rate this manga(out of 10): "<<endl;
						cin>>rate;
						cout<<"You've read a total of "<<num<<" mangas."<<endl;
						check=0;
					}
				}
				if(check==1)
				{
					cout<<"Can not access this book."<<endl;
				}
			}
	int mangameter(){
		int value=1;
		value=(num*12)+1;
		if(value>100){
			value=100;
		}
		if(value>50){
			cout<<"High mangameter rating."<<endl;
		}
		return value;
	}	
};
int mangaworm::num=0;
class comicnerd: virtual public reader{	
	static int num;
	double fee=909.9;
		int check=1;
	public:
		int getcheck(){
			return check;
		}
		comicnerd(){
		}
		double getfee(){
			return fee;
		}
		void display(){
			cout<<"Available comics:"<<endl;
			for(int i=0;i<10;i++){
				cout<<comics[i]<<endl;
			}
		}
		void read(){
				string book;
				int rate;
				int check=1;
				cout<<"Enter a comic to read: "<<endl;
				cin>>book;
				for(int i=0;i<10;i++){
					if(book==comics[i]){
						cout<<"You read: "<<book<<endl;
						num++;
						cout<<"You've read a total of "<<num<<" comics."<<endl;
						cout<<"Please rate this comic(out of 10): "<<endl;
						cin>>rate;
						check=0;
					}
					}
					if(check==1)
				{
					cout<<"Can not access this book."<<endl;
				}
	}
	double comicfactor(){
		double value=1;
		value=num*1.25;
		if(value>10){
			value=10;
		}
		if(value>8){
			cout<<"High comicfactor rating."<<endl;
		}
		return value;
	}
};
int comicnerd::num=0;
class studygeek:virtual public reader{
	static int num;
	double fee=875;
		int check=1;
	public:
		int getcheck(){
			return check;
		}
		studygeek(){
		}
		double getfee(){
			return fee;
		}
		void display(){
			cout<<"Available study books:"<<endl;
			for(int i=0;i<10;i++){
				cout<<study[i]<<endl;
			}
		}
		void read(){
			string book;
			int rate;
			int check=0;
				cout<<"Enter a book to read:  "<<endl;
				cin>>book;
				for(int i=0;i<10;i++){
					if(book==study[i]){
						cout<<"You read: "<<book<<endl;
						num++;
						cout<<"Please rate this book(out of 10): "<<endl;
						cin>>rate;
						cout<<"You've read a total of "<<num<<" books."<<endl;
						check=1;
						}
					}
					if(check==0)
				{
					cout<<"Can not access this book."<<endl;
				}
				}
	double studyscale(){
		double value=1;
		value=num*0.08;
		if(value>1){
			value=1;
		}
		if (value>0.6){
			cout<<"High studyscale rating."<<endl;
		}
		return value;
	}	
};
int studygeek::num=0;
class freader: public mangaworm, public comicnerd, public studygeek{
	static int count;
	static int num;
	public:
		void display(){
			mangaworm::display();
			comicnerd::display();
			studygeek::display();
		}
		void read(){	
			int select=0;
		cout<<"Enter 1 for mangas: "<<endl;
		cout<<"Enter 2 for comics: "<<endl;
		cout<<"Enter 3 for sttudy books: "<<endl;
		cin>>select;
		if(select==1){
			mangaworm::read();
			if(mangaworm::getcheck()==0){
			num++;	
			}
		}
		else if(select==2){
			comicnerd::read();
			if(comicnerd::getcheck()==0){
				num++;
			}
		}
		else if(select==3){
			studygeek::read();
			if(studygeek::getcheck()==0){
				num++;
			}
		}
		cout<<"You've read a total of "<<num<<" as a freader."<<endl;
		if(num>=15){
			cout<<"Maximum amounts of books read as a freader please re-subscribe."<<endl;
		}
		}
		freader(){
		count++;
		if(count>5){
			cout<<"Maximun number of freaders."<<endl;
		}
		}
		void freaderrate(){
			if(mangaworm::mangameter()>50&&comicnerd::comicfactor()>8&&studygeek::studyscale()>0.6){
				cout<<"Mangameter: "<<mangaworm::mangameter()<<endl;
				cout<<"Comicfactor: "<<comicnerd::comicfactor()<<endl;
				cout<<"Studyscale: "<<studygeek::studyscale()<<endl;
				cout<<"High free reader rating."<<endl;
			}
			else {
				cout<<"Mangameter: "<<mangaworm::mangameter()<<endl;
				cout<<"Comicfactor: "<<comicnerd::comicfactor()<<endl;
				cout<<"Studyscale: "<<studygeek::studyscale()<<endl;
			}
		}
		freader(const freader & f){
			count++;
		}
};
int freader::count=0;
int freader::num=0;
int main(){
	int select;
	cout<<"Enter 1 for mangaworm: "<<endl;
	cout<<"Enter 2 for comicnerd: "<<endl;
	cout<<"Enter 3 for studygeeks: "<<endl;
	cout<<"Enter 4 for freader: "<<endl;
	cin>>select;
	if(select==1){
		int cont=0;
		system("cls");
		mangaworm *m=new mangaworm;
		cout<<"Annual fee: "<<m->getfee()<<endl;
		m->display();
		cout<<"Press 1 to read: "<<endl;
		cin>>cont;
		while(cont==1){
			m->read();
			cout<<"Press 1 to read another manga: "<<endl;
			cin>>cont;
		}
		cout<<"Enter your top 3 mangas."<<endl;
		m->top3();
		cout<<"You're current mangameter rating: "<<m->mangameter();
		
	}
	else if(select==2){
		int cont=0;
		system("cls");
		comicnerd *c=new comicnerd;
		cout<<"Annual fee: "<<c->getfee()<<endl;
		c->display();
		cout<<"Press 1 to read: "<<endl;
		cin>>cont;
		while(cont==1){
			c->read();
			cout<<"Press 1 to read another comic: "<<endl;
			cin>>cont;
		}
		cout<<"Enter your top 3 comics."<<endl;
		c->top3();
		cout<<"Current comicfactor rating: "<<c->comicfactor();
	}
	else if(select==3){
		int cont=0;
		system("cls");
		studygeek *s=new studygeek;
		cout<<"Annual fee: "<<s->getfee()<<endl;
		s->display();
		cout<<"Press 1 to read: "<<endl;
		cin>>cont;
		while(cont==1){
			s->read();
			cout<<"Press 1 to read another book: "<<endl;
			cin>>cont;
		}
		cout<<"Enter your top 3 study books."<<endl;
		s->top3();
		cout<<"Current studyscale rating: "<<s->studyscale();
		
	}
	else if(select==4){
		int cont=0;
		system("cls");
		freader *f=new freader;
		f->display();
		cout<<"Press 1 to read: "<<endl;
		cin>>cont;
		while(cont==1){
			f->read();
			cout<<"Press 1 to read another book: "<<endl;
			cin>>cont;
		}
		cout<<"Enter your top 3."<<endl;
		f->top3();
		f->freaderrate();
//		freader f1(*f);
//		f1.freaderrate();
//part e copy constructor for freader class.
	}
}
//static int num is used to count total number of books read and is used by Yagami to award user  ratings using the
//mangameter, comicfactor and studyscale functions.
//read functions allow users to read their choise of books.
//display function shows all availible book for a genre.
//top3 function allows user to input their favourite manga, comic or book .
//read and display functions are overriden as they require different working for each class.
//the getcheck func is used as a method to add total number of books for a freader.
//no overloaded functions.
