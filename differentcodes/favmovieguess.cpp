#include<iostream>
using namespace std;
int main(){
string favMovie1 ="avtar";
string guess = ("guess my favorite movie");
cout<<guess;
string favMovie;
cin >> favMovie;
cout<< favMovie;

if((favMovie != favMovie1) && (favMovie !="quit")){
    cout<<("wrong guess . please try again");
    
}  

if (favMovie1 == favMovie){
    cout<<("congrats!!");
// }else {
//     cout<<("  you quit");
// }
}}