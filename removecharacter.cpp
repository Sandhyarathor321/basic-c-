#include<iostream>
using namespace std;
int main(){
    string name;
    char character;
    cout<<"Enter the String: ";
    getline(cin,name);
    cout<<"Enter the Charcter to remove : ";
    cin>>character;

    for(int i=0 ;i<name.size();i++){
        if(character == name[i]) continue;
        else cout<<name[i];
    }
}
