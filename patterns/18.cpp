#include<iostream>
using namespace std;
int main (){
    //pattern
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
       int j=i;
        while (j<=n){
            cout<<" "<<i<<" ";
            j=j+1;
        }
        cout <<endl;
        i=i+1; 
    }
}