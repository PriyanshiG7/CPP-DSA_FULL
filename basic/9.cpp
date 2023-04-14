#include<iostream>
using namespace std;
int main(){
    char ch ;
    cin >> ch;
    if (ch>='a'  && ch<='z'){
        printf("lower case\n");
    }else if (ch>='A' && ch<='Z'){
        printf("upper case\n");
    }else if( ch >='0' && ch<='9'){
        printf("this is numeric\n");
    }else{
        printf("none");
    }
}