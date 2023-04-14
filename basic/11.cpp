#include<iostream>
using namespace std;
int main(){
    // sum of 1 to n
    int n , i=1  , sum=0;
    cin>> n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"sum from 1 to n :";
    cout<<sum<<endl;
    return 0;
}