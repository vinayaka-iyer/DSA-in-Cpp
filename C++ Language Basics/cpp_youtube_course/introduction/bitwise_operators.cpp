#include<iostream>
using namespace std;

int main(){
// Bitwise Operators
    int a = 4;
    int b = 6;
    cout << " a&b " << (a&b) << endl; //AND
    cout << " a|b " << (a|b) << endl; //OR
    cout << " ~a " << ~a << endl; //NOT
    cout << " a^b " << (a^b) << endl; //XOR

// >> - right shift = divide
// << - left shift =  multiply
// for big number left shift can give negative number

    cout << (17>>1) <<endl; //8
    cout << (17>>2) <<endl; //4
    cout << (17<<1) <<endl; //34
    cout << (17<<2) <<endl; //68

// i++ post increment
// ++i pre increment
// i-- pre decrement
// --i post decrement

    int i = 7;
    cout << (++i) << endl; //8
    cout << (i++) << endl; //8
    cout << (i--) << endl; //9
    cout << (--i) << endl; //7  
}