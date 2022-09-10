#include<iostream>
using namespace std;

int main(){

    //Conditionals
    int a;
    int b;
    cin >> a;
    cin >> b;

    if (a>b){
        cout << "answer is a" << endl;
    }

    else {
        cout << "answer is b" << endl;
    }  

    int n;
    cin >> n;
    if (n>0){
        cout << "n is positive" << endl;
    }
    else if (n<0) {
        cout << "n is negative" << endl;
    }
    else {
        cout << "n is zero" << endl;
    }
    
    //Loops
    int num;
    int i = 1;

    cin >> num;
    while (i<=num){
        cout << i << " ";
        i = i+1;
    }
    cout << endl;

    int sumeven = 0;
    int limit;
    int ele = 0;

    cin >> limit;
    while (ele <= limit){
        sumeven = sumeven + ele;
        ele = ele + 2;
    }
    cout << sumeven << endl;
    
    int prime;
    int div = 2;
    bool result = 1;

    cin >> prime;
    while (div<prime){
        if (prime%div==0) {
            result = 0;
        }
        div = div + 1;
    }
    cout << result << endl;
}