/*
Array
- a list which stores similar data types
- contiguous memory locations
- all elements can be accessed via its index

Why? 
- to store multiple values in one variable

Decalaration
int arr[size];

Access
- using index
- arr[4] -> access 5th location  
- index from 0 to n-1

Initialization
int num[3] = {5,7,11}

*/

#include<iostream>
#include<algorithm>
using namespace std;

//print the array
void printArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    //declare
    int first[10];

    //accessing an array
    cout << "value at 0 index: " << first[0] << endl;

    //initializing an array
    int second[3] = {5,7,11};
    cout << "value at 2 index: " << second[2] << endl;

    int third[15] = {2,7};
    printArray(third,15);

    //initializing all locations with 0 
    int fourth[10] = {0};
    printArray(fourth,10);

    //initializing all locations with say 1
    int fifth[10];
    fill_n(fifth, 10, 1);
    printArray(fifth, 10);

    //finding size of an array
    int fifthsize = sizeof(fifth)/sizeof(int);
    cout << "size of fifth is " << fifthsize << endl;

    //char arrays
    char ch[5] = {'a','b','c','r','p'};
    cout << ch[3] << endl;
    
    return 0;
}
 
