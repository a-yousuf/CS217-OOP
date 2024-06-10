#include <iostream>
using namespace std;
double bill (double rate, int min, double income){
    double bill;
    if (income>=25000){
         if(min<=20){
            bill=0;
        }
        else{
            bill= rate*0.70*((min-20)/60);
        }
    }
    else{
          if(min<=30){
            bill=0;
        }
        else{
            bill= rate*0.4*((min-30)/60);
        }
    }

    return bill;
}

int main (){
    double rate,income;
    int min;

	cout <<"Enter hourly rate: ";
    cin >> rate;
    cout <<"Enter consulting time(minutes): ";
    cin >> min;
    cout <<"Enter your income: ";
    cin >> income;
    cout << endl <<"Billing Amount : $"<< bill(rate,min,income);


    return 0;
}

