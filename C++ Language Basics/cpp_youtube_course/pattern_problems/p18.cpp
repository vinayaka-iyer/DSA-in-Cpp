#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 1;

    while(i<=n){
        int k = 1;
        int j = 1;
        int l = i-1;

        while(k<=n-i){
            cout << " ";
            k = k + 1;
        }

        while(j<=i){
            cout << j;
            j = j+1;
        }

        while(l>=1){
            cout << l;
            l = l-1;
        }

        cout << endl;
        i = i + 1;
    }
}