//Divyansh Rastogi
//23070123048
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
/*enter input: 
22
the no. is:22
the size is:4
enter float :
2.66
the no. is: 2.66
the size is: 4
enter the no.
 :party
the no. is : 0
the size is:8
enter char:
  the no. is:
the size is: 1*/
