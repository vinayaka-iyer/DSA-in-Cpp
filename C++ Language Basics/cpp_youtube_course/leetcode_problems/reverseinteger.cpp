#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int ans = 0;
    while (x != 0){
        int j = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            cout << 0;
        }
        ans = ans * 10 + j;
        x = x / 10;
    }
    cout << ans;
    return 0;
}
