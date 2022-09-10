#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    
    for(;i<=n;){
        sum = sum + i;
        i++;
    }
    cout << sum;
}