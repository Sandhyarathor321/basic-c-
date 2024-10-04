#include <iostream>
using namespace std;
class Invoice{
string partNumber;
string partDescription;
int quantity;
double price_per_item;
public:
Invoice(string partNumber,string partDescription , int quantity , double price_per_items){
    this->partNumber = partNumber;
    this->partDescription = partDescription;
    this->quantity = quantity;
    this->price_per_item = price_per_item;
}
void setPartNumber(string partNumber){
this->partNumber = partNumber;
}
void setDescription(string partDescription){
this->partDescription = partDescription;
}    void setQuantity(int quantity){
 if(quantity < 0) this->quantity = 0;
    else this->quantity = quantity;
}
void setPricePerItem(int price_per_item){
    if(price_per_item < 0) this->price_per_item = 0;
else this->price_per_item = price_per_item;
}
string getPartNumber(){
return partNumber;
}
string getDescription(){
return partDescription;
}
int getQuantity(){
return quantity;
}
double getPricePerItem(){
return price_per_item;
}
double getInvoiceAmount(){
    return price_per_item*quantity;
}
};
int main(){
string number,description;
int quant;
double pricePeritem;
cout<<"Enter the PartNumber : ";
cin>>number;

cout<<"Enter the PartDescription : ";
cin>>description;
cout<<"Enter the Quantity : ";
cin>>quant;
cout<<"Enter the pricePeritem : ";
cin>>pricePeritem;
Invoice d1(" "," ",0,0.0);
d1.setPartNumber(number);
d1.setDescription(description);
d1.setQuantity(quant);
d1.setPricePerItem(pricePeritem);
cout<<endl;
cout<<"PartNumber: "<<d1.getPartNumber()<<endl;
cout<<"Description: "<<d1.getDescription()<<endl;
cout<<"quantity: "<<d1.getQuantity()<<endl;
cout<<"PricePeritem: "<<d1.getPricePerItem()<<endl;
cout<<"Final Amount : "<<d1.getInvoiceAmount()<<endl;
}

