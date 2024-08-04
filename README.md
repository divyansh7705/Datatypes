#Aim:<br>
To study and implement C++ Program Structure (Data Types) an storage class.<br>

#Theory:<br>
In C++, data types have specific sizes which determine how much memory is allocated for each type. For example, an int typically uses 4 bytes, char uses 1 byte, float uses 4 bytes, and double uses 8 bytes. Sizes can vary based on the system and compiler.
Storage classes define the scope, visibility, and lifetime of variables/functions.
The four storage classes are:<br>

auto: Default for local variables.<br>
static: Retains value between function calls, local to the file if used in global context.<br>
extern: Extends visibility across multiple files.<br>
register: Suggests storing variable in a CPU register for faster access, though modern compilers often ignore this.<br>
These classes help manage how and where data is stored and accessed within a program.<br>
#Code for the program:<br>
```
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
```
#conclusion : <br>
in this experiment we learnt to check the size of data types and made program using storage class. <br>
