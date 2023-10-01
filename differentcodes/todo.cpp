#include<iostream>
using namespace std;
void main(){
string todo, task, req;
todo =[];

    cout<<("please enter your  request");
    cin>>req;
while (true){
    if(req=="quit"){
        cout<<("quitting app");
        break;
    }
    if (req=="list"){
        cout<<("---------");
        for(let i=0; i<todo.length ;i++){
            cout<<(i,todo[i]);
        }
        cout<<("--------");
    }else if(req=="add"){
       cout<<("please enter the task you want to add");
       cin>>task;
       todo.push(task);
       cout<<("task added");
     }
    // else if (req=="delete"){
    //     let idx = cin>>("please enter the task index")
    //     todo.splice(idx,1);
    //     cout<<("task deleted");
    // }
    else{
        cout<<("wrong request");
    }
    
    cout<<("please enter your next request");
    cin>>req;
}

}

