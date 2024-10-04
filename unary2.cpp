#include <iostream>
using namespace std;
class overLoading{
int x;
int y;

public:
overLoading(){ }

overLoading(int x ,int y){ 
this->x = x;
this->y = y;
}

void operator --(int noUse){
    x-=1;
    y-=1;
}

void show(){
    cout<<x<<" "<<y;
    cout<<endl;
}

friend void operator ++(overLoading &d);
friend void operator ++(overLoading &d,int noUse);
friend void operator --(overLoading &d);
friend void operator --(overLoading &d,int noUse);

};

void operator ++(overLoading &d){
++(d.x);
++(d.y);
}

void operator --(overLoading &d){
--(d.x);
--(d.y);
}

void operator ++(overLoading &d, int noUSe){
++(d.x);
++(d.y);
}

void operator --(overLoading &d, int noUse){
--(d.x);
--(d.y);
}


int main(){
int n1,n2;
printf("Enter two Number : ");
scanf("%d %d",&n1,&n2);
overLoading d1(n1,n2);
++d1;
printf("pre-increment  : ");
d1.show();
--d1;
printf("pre-decrement  : ");
d1.show();
d1++;
printf("post-increment  : ");
d1.show();
--d1;
printf("post-decrement  : ");
d1.show();

}
