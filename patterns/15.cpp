#include<iostream>
using namespace std;
int main (){
    // pattern1 (rectangle)
    int n;
    cin>> n;
    int i=1;

    //i=1 {n=1,2,3.....}
    while(i<=n){
        int j=1;
        while (j<=n){
             cout<<" * ";
             j=j+1;
        }
        cout<<endl;
        i=i+1;
    } 
     // if i=0 {n=0,1,2,3....} - NOTE
}