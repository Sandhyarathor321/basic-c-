#include <iostream>
using namespace std;
class SavingsAccount{
    private:
    float savingBalance;
    static float annualIntrestRate;  
    public:
    SavingsAccount(int savingBalance){
        this->savingBalance = savingBalance;
    }
    void calculateMonthlyInterest(){
       float intrest =  (savingBalance*annualIntrestRate)/12;
       float newBalance = intrest + savingBalance;
       cout<<"Balance = "<<newBalance;
    }

    static void modifyInterestRate(float newIntrestRate){    
        annualIntrestRate = newIntrestRate/100;
    }

};

float SavingsAccount::annualIntrestRate = 0.04;   

int main(){
    float intrestRate;
    cout<<"Enter the Suitable Intrest Rate: ";
    cin>>intrestRate;
    SavingsAccount::modifyInterestRate(intrestRate);
    SavingsAccount saver1(2000.00) , saver2(3000.00);
    cout<<"Saver 1 :";
    saver1.calculateMonthlyInterest();
    cout<<endl;
    cout<<"Saver 2 : ";
    saver2.calculateMonthlyInterest();
  }
