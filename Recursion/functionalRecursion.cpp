#include <bits/stdc++.h>
using namespace std;


int functionalRecursion(int n){

    if(n < 1){
        return n;
    }

    int result = functionalRecursion(n - 1);
    return result + n;
}


int main(){
    int n = 3;
   int output =  functionalRecursion(n);
   cout << output;
    return 0;
}