#include<iostream>
using namespace std;
int main (){
    //pattern
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
       int j=1;
       int start =n - i;
        while (j<=i){
            cout<<" "<<start<<" ";
         start=start+1;
            j=j+1;
        }
        cout <<endl;
        i=i+1; 
    }
}