#include<iostream>
using namespace std;

int main(){
    /*
    n = 4
    ****
    ****
    ****
    ****
    */

    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }

    /*
    n = 4
    1111
    2222
    3333
    4444
    */

    int n ;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}