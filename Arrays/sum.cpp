#include<iostream>
using namespace std;

//finding sum of elements in array
int sum(int arr[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += arr[i];
    }

    return ans;
}


int main(){
    int size;
    cin >> size;
    int num[100];
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "sum of elements in array is: " << sum(num, size) << endl;
    return 0;
}