#include<iostream>
using namespace std;

//scope of variables
//cannot make same variable in one block
//bigger block value can be used in it's smaller blocks
//the variable declared in block takes precedence over all others
int main(){
    int a = 3;
    cout << a << endl;

    if(true){
        int a = 5;
        cout << a << endl;
    }

    int b = 6;
    for(;b<=9;b++){
        cout << "*"<<endl;
    }
}