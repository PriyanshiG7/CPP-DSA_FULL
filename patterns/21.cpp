#include<iostream>
using namespace std;
int main (){
    //pattern
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int j=1;
        while (j<=i){
            cout<<" "<<j<<" ";
            j=j+1;
        }
        cout <<endl;
        i=i+1; 
    }
}