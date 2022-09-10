#include<iostream>
using namespace std;

//swap alternate elements
void swapAlternate(int arr[], int n){
    for(int i = 0; i < n; i+=2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
}

//print the array
void printArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    int arr[100];
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    swapAlternate(arr, size);
    printArray(arr,size);
    return 0;
}