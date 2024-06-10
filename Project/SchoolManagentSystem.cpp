/*Team Members:
  
  Abdullah Omerji 20k-1031
  Tayyib Ismail 20k-0461
  Muaaz Alam 20k-0212
  
*/
#include<iostream>
#include<iomanip>
using namespace std;

class student{
	protected:
	string f_name,l_name;
	int age;
	string roll_no;
	string grade;
	public:
		virtual void display()=0;
		virtual void newstudent()=0;
		virtual void modifystudent()=0;
		
//		string getfname()const{
//			return f_name;
//		}
//		string getlname()const{
//			return l_name;
//		}
		string getrollno()const{
			return roll_no;
		}
//		int getage()const{
//			return age;
//		}
//		void setfname(const string f_name){
//			this->f_name=f_name;
//		}
//		void setlname(const string l_name){
//			this->l_name=l_name;
//		}
//		void setrollno(const string roll_no){
//			this->roll_no=roll_no;
//		}
//		void setage(const int age){
//			this->age=age;
//		}
};
class arts:virtual public student{
	static int count;
	float marks_draw,marks_paint,marks_colour;
	public:
		void newstudent(){
			cout<<"\nEnter first name: "<<endl;
			cin>>f_name;
			cout<<"Enter last name: "<<endl;
			cin>>l_name;
			cout<<"Enter roll_no: "<<endl;
			cin>>roll_no;
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<"Enter drawing marks: "<<endl;
			cin>>marks_draw;
			cout<<"Enter painting marks: "<<endl;
			cin>>marks_paint;
			cout<<"Enter colouring marks: "<<endl;
			cin>>marks_colour;
			count++;
		}
		string calcgrade(float marks_draw,float marks_paint,float marks_colour){
			float avg=0;
			avg=(marks_draw+marks_paint+marks_colour)/3;
			if(avg<50){
				grade="F";
			}
			else if(avg>50&&avg<60){
				grade="D";
			}
			else if(avg>60&&avg<70){
				grade="C";
			}
			else if(avg>70&&avg<80){
				grade="B";
			}
			else if(avg>80&&avg<90){
				grade="A";
			}
			else if(avg>90){
				grade="A+";
			}
			return grade;
		}
		void display(){
			cout<<"\nName: "<<f_name<<" "<<l_name<<endl;
			cout<<"Roll number: "<<roll_no<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Marks: "<<endl;
			cout<<"Drawing: "<<marks_draw<<endl;
			cout<<"Painting: "<<marks_paint<<endl;
			cout<<"Colouring: "<<marks_colour<<endl;
			cout<<"Grade: "<<calcgrade(marks_draw,marks_paint,marks_colour)<<endl;
			
		}
		void modifystudent(){
			int ch;
			int loop=1;
			while(loop==1){
			cout<<"\n1.  first name. "<<endl;
			cout<<"2.  last name. "<<endl; 
			cout<<"3.  roll number."<<endl;
			cout<<"4.  age."<<endl;
			cout<<"5.  drawing marks."<<endl;
			cout<<"6.  painting marks."<<endl;
			cout<<"7.  colouring marks."<<endl;
			cout<<"Enter 1-7: "<<endl;
			cin>>ch;
			switch(ch){
				case 1:
					cout<<"Enter first name: "<<endl;
					cin>>f_name;
					break;
				case 2:
					cout<<"Enter last name: "<<endl;
					cin>>l_name;
					break;
				case 3:
					cout<<"Enter roll number: "<<endl;
					cin>>roll_no;
					break;
				case 4:
					int age;
					cout<<"Enter age: "<<endl;
					cin>>age;
					break;
				case 5:
					cout<<"Enter drawing marks: "<<endl;
					cin>>marks_draw;
					break;
				case 6:
					cout<<"Enter painting marks: "<<endl;
					cin>>marks_paint;
					break;
				case 7:
					cout<<"Enter colouring marks: "<<endl;
					cin>>marks_colour;
					break; 
				default:
					cout<<"Invalid choice."<<endl;
					}
				cout<<"Press 1 to continue changing."<<endl;
				cin>>loop;
			};
		}
		
};
int arts::count=0;
class science:virtual public student{
	static int count;
	float marks_phy,marks_bio,marks_chem,marks_maths;
	public:
		void newstudent(){
			cout<<"\nEnter first name: "<<endl;
			cin>>f_name;
			cout<<"Enter last name: "<<endl;
			cin>>l_name;
			cout<<"Enter roll_no: "<<endl;
			cin>>roll_no;
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<"Enter physics marks: "<<endl;
			cin>>marks_phy;
			cout<<"Enter biology marks: "<<endl;
			cin>>marks_bio;
			cout<<"Enter chemistry marks: "<<endl;
			cin>>marks_chem;
			cout<<"Enter maths marks: "<<endl;
			cin>>marks_maths;
			count++;
		}
		string calcgrade(float marks_phy,float marks_chem,float marks_bio,float marks_maths){
			float avg=0;
			avg=(marks_phy+marks_bio+marks_chem+marks_maths)/4;
			if(avg<50){
				grade="F";
			}
			else if(avg>50&&avg<60){
				grade="D";
			}
			else if(avg>60&&avg<70){
				grade="C";
			}
			else if(avg>70&&avg<80){
				grade="B";
			}
			else if(avg>80&&avg<90){
				grade="A";
			}
			else if(avg>90){
				grade="A+";
			}
			return grade;
		}
		void display(){
			cout<<"\nName: "<<f_name<<" "<<l_name<<endl;
			cout<<"Roll number: "<<roll_no<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Marks: "<<endl;
			cout<<"Physics: "<<marks_phy<<endl;
			cout<<"Biology: "<<marks_bio<<endl;
			cout<<"Chemistry: "<<marks_chem<<endl;
			cout<<"Maths: "<<marks_maths<<endl;
			cout<<"Grade: "<<calcgrade(marks_phy,marks_bio,marks_chem,marks_maths)<<endl;
			
		}
		void modifystudent(){
			int ch;
			int loop=1;
			while(loop==1){
			cout<<"\n1.  first name. "<<endl;
			cout<<"2.  last name. "<<endl; 
			cout<<"3.  roll number."<<endl;
			cout<<"4.  age."<<endl;
			cout<<"5.  physics marks."<<endl;
			cout<<"6.  biology marks."<<endl;
			cout<<"7.  chemistry marks."<<endl;
			cout<<"8.  maths marks."<<endl;
			cout<<"Enter 1-8: "<<endl;
			cin>>ch;
			switch(ch){
				case 1:
					cout<<"Enter first name: "<<endl;
					cin>>f_name;
					break;
				case 2:
					cout<<"Enter last name: "<<endl;
					cin>>l_name;
					break;
				case 3:
					cout<<"Enter roll number: "<<endl;
					cin>>roll_no;
					break;
				case 4:
					int age;
					cout<<"Enter age: "<<endl;
					cin>>age;
					break;
				case 5:
					cout<<"Enter physics marks: "<<endl;
					cin>>marks_phy;
					break;
				case 6:
					cout<<"Enter biology marks: "<<endl;
					cin>>marks_bio;
					break;
				case 7:
					cout<<"Enter chemistry marks: "<<endl;
					cin>>marks_chem;
					break; 
				case 8:
					cout<<"Enter maths marks: "<<endl;
					cin>>marks_maths;
				default:
					cout<<"Invalid choice."<<endl;
					}
				cout<<"Press 1 to continue changing."<<endl;
				cin>>loop;
			};
		}
};
int science::count=0;
class accounts:virtual public student{
	static int count;
	float marks_eco,marks_acc;
	public:
		void newstudent(){
			cout<<"\nEnter first name: "<<endl;
			cin>>f_name;
			cout<<"Enter last name: "<<endl;
			cin>>l_name;
			cout<<"Enter roll_no: "<<endl;
			cin>>roll_no;
			cout<<"Enter age: "<<endl;
			cin>>age;
			cout<<"Enter economy marks: "<<endl;
			cin>>marks_eco;
			cout<<"Enter accounts marks: "<<endl;
			cin>>marks_acc;
			count++;
		}
		string calcgrade(float marks_eco,float marks_acc){
			float avg=0;
			avg=( marks_eco+marks_acc)/2;
			if(avg<50){
				grade="F";
			}
			else if(avg>50&&avg<60){
				grade="D";
			}
			else if(avg>60&&avg<70){
				grade="C";
			}
			else if(avg>70&&avg<80){
				grade="B";
			}
			else if(avg>80&&avg<90){
				grade="A";
			}
			else if(avg>90){
				grade="A+";
			}
			return grade;
		}	
		void display(){
			cout<<"\nName: "<<f_name<<" "<<l_name<<endl;
			cout<<"Roll number: "<<roll_no<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Marks: "<<endl;
			cout<<"Economy: "<<marks_eco<<endl;
			cout<<"Accounts: "<<marks_acc<<endl;
			cout<<"Grade: "<<calcgrade(marks_eco,marks_acc)<<endl;
			
		}
		void modifystudent(){
			int ch;
			int loop=1;
			while(loop==1){
			cout<<"\n1.  first name. "<<endl;
			cout<<"2.  last name. "<<endl; 
			cout<<"3.  roll number."<<endl;
			cout<<"4.  age."<<endl;
			cout<<"5.  economy marks."<<endl;
			cout<<"6.  accounts marks."<<endl;
			cout<<"Enter 1-6: "<<endl;
			cin>>ch;
			switch(ch){
				case 1:
					cout<<"Enter first name: "<<endl;
					cin>>f_name;
					break;
				case 2:
					cout<<"Enter last name: "<<endl;
					cin>>l_name;
					break;
				case 3:
					cout<<"Enter roll number: "<<endl;
					cin>>roll_no;
					break;
				case 4:
					int age;
					cout<<"Enter age: "<<endl;
					cin>>age;
					break;
				case 5:
					cout<<"Enter economy marks: "<<endl;
					cin>>marks_eco;
					break;
				case 6:
					cout<<"Enter accounts marks: "<<endl;
					cin>>marks_acc;
					break;
				default:
					cout<<"Invalid choice."<<endl;
					}
				cout<<"Press 1 to continue changing."<<endl;
				cin>>loop;
			};
		}
};
int accounts::count=0;
int main(){
	arts a[50];
	science s[80];
	accounts acc[30];
	int c,ch,go;
	main:
	cout<<"\n\t WELCOME TO THE SCHOOL MANAGEMENT SYSTEM!!!"<<endl;
	cout<<"\t+------------------------------------------+"<<endl;
	cout<<"\t    Please choose an option to continue.\n\n"<<endl;	
	cout<<"1.Create a new student."<<endl;
	cout<<"2.Display an existing students information."<<endl;
	cout<<"3.Modify  an existing students information."<<endl;
	cout<<"4.Delete an existing students information."<<endl;
	cout<<"5.Exit menu."<<endl;
	cout<<"Enter 1-5 to continue: "<<endl;
	cin>>ch;
	system("cls");
	if(ch==1){
		create:
		cout<<"\n1.Arts student. "<<endl;
		cout<<"2.Science student. "<<endl;
		cout<<"3. Accounts student. "<<endl;
		cout<<"Enter 1-3 to continue: "<<endl;
		cin>>c;
		system("cls");
		switch(c){
			case 1:
					for(int i=0;i<50;i++){
						a[i].newstudent();
						cout<<"\nNew student created."<<endl;
						cout<<"Enter 1 to create another student, press any other number to return to main menu: "<<endl;
						cin>>go;
						if(go==1){
							system("cls");
							goto create;
						}
						else if(go!=1){
							system("cls");
							goto main;
						}
						}
			case 2:
				for(int i=0;i<80;i++){
					s[i].newstudent();
					cout<<"\nNew student created."<<endl;
						cout<<"Enter 1 to create another student, press any other number to return to main menu: "<<endl;
						cin>>go;
						if(go==1){
							system("cls");
							goto create;
						}
						else if(go!=1){
							system("cls");
							goto main;
						}
				}
			case 3:
					for(int i=0;i<30;i++){
					acc[i].newstudent();
					cout<<"\nNew student created."<<endl;
						cout<<"Enter 1 to create another student, press any other number return to main menu: "<<endl;
						cin>>go;
						if(go==1){
							system("cls");
							goto create;
						}
						else if(go!=1){
							system("cls");
							goto main;
						}
				}
			default:
					cout<<"\nInvalid try again."<<endl;
					goto create;
		}
	}
	else if(ch==2){
		display:
			string roll_no;
			cout<<"\n1.Arts student. "<<endl;
			cout<<"2.Science student. "<<endl;
			cout<<"3. Accounts student. "<<endl;
			cout<<"Enter 1-3 to continue: "<<endl;
			cin>>c;
			system("cls");
			switch(c){
				case 1:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<50;i++){
						if(roll_no==a[i].getrollno()){
							a[i].display();
							cout<<"\nEnter 1 to display another student, press any other number return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto display;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 2:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<80;i++){
						if(roll_no==s[i].getrollno()){
							s[i].display();
							cout<<"\nEnter 1 to display another student, press any other number return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto display;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 3:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<30;i++){
						if(roll_no==acc[i].getrollno()){
							acc[i].display();
							cout<<"\nEnter 1 to display another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto display;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
					
					
			}
	}
	else if(ch==3){
		modify:
		    string roll_no;
			cout<<"\n1.Arts student. "<<endl;
			cout<<"2.Science student. "<<endl;
			cout<<"3. Accounts student. "<<endl;
			cout<<"Enter 1-3 to continue: "<<endl;
			cin>>c;
			system("cls");
			switch(c){
				case 1:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<50;i++){
						if(roll_no==a[i].getrollno()){
							a[i].modifystudent();
							cout<<"\nEnter 1 to modify another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto modify;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 2:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<80;i++){
						if(roll_no==s[i].getrollno()){
							s[i].modifystudent();
							cout<<"\nEnter 1 to modify another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto modify;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 3:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<30;i++){
						if(roll_no==acc[i].getrollno()){
							acc[i].modifystudent();
							cout<<"\nEnter 1 to display another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto modify;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}  
	        }
    }
    
	else if(ch==4){
		deletee:
		    string roll_no;
			cout<<"\n1.Arts student. "<<endl;
			cout<<"2.Science student. "<<endl;
			cout<<"3. Accounts student. "<<endl;
			cout<<"Enter 1-3 to continue: "<<endl;
			cin>>c;
			system("cls");
			switch(c){
				case 1:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<50;i++){
						if(roll_no==a[i].getrollno()){
						for(int r=0; r<50; r++)
                         {  
                            if(a[r].getrollno() == roll_no)
                            {
                                for(int j=r; j<(50-1); j++)
                                {
                                    a[j]=a[j+1];
                                }
                                 break;
                            }
                         }
							cout<<"\nEnter 1 to delete another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto deletee;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 2:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<80;i++){
						if(roll_no==s[i].getrollno()){
						for(int r=0; r<80; r++)
                         {  
                            if(s[r].getrollno() == roll_no)
                            {
                                for(int j=r; j<(50-1); j++)
                                {
                                    s[j]=s[j+1];
                                }
                                 break;
                            }
                         }
							cout<<"\nEnter 1 to delete another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto deletee;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}
				case 3:
					cout<<"\nEnter student's roll number: "<<endl;
					cin>>roll_no;
					for(int i=0;i<30;i++){
						if(roll_no==acc[i].getrollno()){
						for(int r=0; r<30; r++)
                         {  
                            if(acc[r].getrollno() == roll_no)
                            {
                                for(int j=r; j<(50-1); j++)
                                {
                                    acc[j]=acc[j+1];
                                }
                                 break;
                            }
                         }
							cout<<"\nEnter 1 to delete another student, press any other number to return to main menu: "<<endl;
								cin>>go;
								if(go==1){
										system("cls");
										goto deletee;
								}
								else if(go!=1){
										system("cls");
										goto main;
								}
			
						}
						else{
							cout<<"\nStudent not found"<<endl;
							goto main;
						}
					}  
	        }
		
	}    
	else if(ch==5)
	{
		goto exit;
	}    
    else{
		cout<<"\tInvalid choice. Please try again."<<endl;
		goto main;
	}
	exit:
	system("cls");
	cout<<"\n\tThank you for visiting!!";  

}

