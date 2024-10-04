#include <iostream>
using namespace std;
class time
{
private:
    int hour;
    int minute;
    int second;

public:
    
    time()
    {
        this->hour = 0;
        this->minute = 0;
        this->second = 0;
    }

    time(int hour, int minute, int second)
    {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
void add(time t1, time t2)
    {
        second = t1.second + t2.second; 
        second = second % 60;           

        minute = t1.minute + t2.minute + (t1.second + t2.second) / 60; 
        minute = minute % 60;                                          

        hour = t1.hour + t2.hour + (t1.minute + t2.minute + (t1.second + t2.second) / 60) / 60; 
        hour = hour % 60;
    }

    
    void display()
    {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"Enter the time1 (hour,minute,second) : ";
    cin>>h1>>m1>>s1;
    cout<<"Enter the time2 (hour,minute,second) : ";
    cin>>h2>>m2>>s2;
    time d1(h1, m1, s1), d2(h2, m2, s2), result;
    result.add(d1, d2);
    result.display();
    return 0;
}

