// to create number in reverse flow: ans = (digit*10^i) + ans ALSO use same formula to convert from decimal to binary
// to create  number in same flow: ans = (ans*10) + digit

#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    int ans  = 0;
    int i = 0;
    
    while(n != 0 ) {
        int bit  = n & 1;
        ans = (bit * pow(10, i) ) + ans;
        n = n >> 1;
        i++;
    }
    cout<<" Answer is " << ans << endl;
    return 0;
}