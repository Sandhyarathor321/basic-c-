#include <iostream>
using namespace std;
class toolbooth{
    unsigned int totalCars;
    double moneyCollected;
    public:
    toolbooth(unsigned int totalCars,double moneyCollected){
        this->totalCars = totalCars;
        this->moneyCollected = moneyCollected;
    }

    void payingCar(){
        totalCars++;
        moneyCollected+=0.5;
    }

    void nonPayingCar(){
        totalCars++;
        moneyCollected+=0;
    }

    void display(){
        cout<<"Total Numbers of Cars are: "<<totalCars<<endl;
        cout<<"Money Collected from Tool Booths are : "<<moneyCollected<<endl;
    }

};
int main(){
 toolbooth d1(0,0);
 cout<<"Enter the esc to exit through loop . Press p for Paying Cars and Press np for Non-Paying Car"<<endl;   
 char x;
 while(x!='e'){
 cin>>x;
 switch(x){
    if(x == 'e')
    case  'e':
    break;
    case 'p':
    d1.payingCar();
    break;
    case 'n':
    d1.nonPayingCar();
    break;
 }
 }

 d1.display();

}

