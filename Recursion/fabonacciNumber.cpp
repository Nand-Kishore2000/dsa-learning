#include<bits/stdc++.h>
using namespace std;

int fabonacciNumbers(int n){
    if( n <= 1) return n;

    int lastNum = fabonacciNumbers(n - 1);
    int secondNum = fabonacciNumbers(n - 2);
    return lastNum + secondNum;
}

int main(){
    int n = 3;
    int ans = fabonacciNumbers(n);
    cout << ans;
    return 0;
}