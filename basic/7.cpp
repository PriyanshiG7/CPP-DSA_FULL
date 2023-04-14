#include<iostream>
using namespace std;
int main (){
    int a, b;
    cin >> a >> b;
    cout<< a<<","<< b<<" ";
    if (a>b){
        printf("[a is greater]\n");
    }else if (b>a){
        printf("[b is greater]\n");
    }else{
        printf("[both equal]\n");
    }
}