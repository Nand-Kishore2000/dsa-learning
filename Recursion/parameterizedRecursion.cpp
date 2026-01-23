#include <bits/stdc++.h>
using namespace std;

// Output => N=5;  1+2+3+4+5 = 15
void parameterizedRecursion(int i, int sum){

    if(i < 1){
        cout << sum;
        return;
    }
    parameterizedRecursion(i - 1, sum + i);//1st itegrate => i -1 = 4, sum + i = 0 + 5
}


int main(){
    int n = 3;
    parameterizedRecursion(n,0);
     return 0;
}