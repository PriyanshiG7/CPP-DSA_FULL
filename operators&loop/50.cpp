#include<iostream>
using namespace std;
int main (){
    int n , m;
    cout <<"enter the n and m value"<<endl;
    cin>> n >>m;
    cout <<"print the value of a&b from 1-n & 0-m :  ";
    for(int a=1, b=0 ; a<=n && b<m; a++,b++)
    { 
        cout<<a <<" "<<b<<endl;
    }
}