#include <iostream>
#include<string>
using namespace std;
int main() {
    int myintvar;
    float myfloatvar;
    char mycharvar;
    double mydouble;
    bool myboolvar;
   
    cout<<"enter input: \n";
    cin>>myintvar;
    cout<<"the no. is:"<<myintvar<<endl<<"the size is:"<<sizeof(myintvar)<<endl;
    cout<<"enter float : \n";
    cin>>myfloatvar;
    cout<<"the no. is: "<<myfloatvar<<endl<<"the size is: "<<sizeof(myfloatvar)<<endl;
    cout << "enter the no. \n :";
    cin>>mydouble;
    cout << "the no. is : "<<mydouble<<endl<<"the size is:"<< sizeof(mydouble)<<endl;
    cout<<"enter char: \n";
    cin>>mycharvar;
    cout<<"  the no. is: "<<mycharvar<<endl<<"the size is: "<<sizeof(mycharvar)<<endl;
   
}