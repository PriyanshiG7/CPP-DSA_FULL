#include <iostream>
using namespace std;
int main() {
    //for user  input taken 
    int a ;                    // int is datatype and a is variable 
    cin>>a;
    cout<< a << endl;
    float b;                   //float is datatype
    cin>> b;
    cout<< b << endl;
    char c = 'p' ;         // here we not give double character in single inverted comma 
     //cin>> c;          // for user defined input not taken input by user  and char is datatype 
    cout<< c << endl;
    string d = "priyanshi";
    cout << d << endl;
    double e = 1.32;
    cout<< e << endl;
    bool b1 = true;
    cout << b1 << endl;


    // for knowing any datatype size example:
    int size = sizeof(a);
    cout<<"size of a is :" << size << endl;
    return 0 ;
    
}