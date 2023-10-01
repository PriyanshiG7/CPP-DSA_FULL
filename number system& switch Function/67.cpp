#include<iostream>
using namespace std;
int main (){
    int a = 1330;
    int b=30;
    int c=20;
    int d=10;
    char num;
    cout<< "enter the operation you want to perform"<<endl;
    cin>>num;
    switch (num)
    {
    case '1' : cout << "100 rupee notes are "<<(a/100)<<endl;
        break;
    case '2' : cout << "50 rupee notes are "<<(b/50)<<end;
        break;
    case '3' : cout << "20 rupee notes are "<<(b/20)<<endl;
        break;
    case '4' : cout << "1 rupee notes are "<<(d/1)<<endl;
        break;
    default:
        break; 
    }
} 