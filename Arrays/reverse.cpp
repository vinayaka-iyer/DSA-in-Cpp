#include<iostream>
using namespace std;

//reverse the array - my logic
void reverse(int arr[], int size){
    for(int i = 0; i< size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

//reverse the array - start > end logic

void reverse2(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr, 10);
    reverse(arr,10);
    printArray(arr,10);
    reverse2(arr,10);
    printArray(arr,10);
}