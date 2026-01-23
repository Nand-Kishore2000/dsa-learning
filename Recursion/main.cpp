#include <bits/stdc++.h>
using namespace std;

// TC => BIG O(n)
// SC => BIG O(n)
void printNumberInBacktracking (int start,int n){
    if(start > n){
        return ;
    }

    printNumberInBacktracking(start + 1, n);
    cout << start << endl;


}

int main()
{

    printNumberInBacktracking(1,5); // N= 5;  5,4,3,2,1 without using + operator
    return 0;
}

// // TC => BIG O(n)
// // SC => BIG O(n)
// void printReverseNumber (int n){
//     if(n == 0){
//         return;
//     }

//     cout << n <<endl;
//     printReverseNumber(n-1);
// }

// int main()
// {

//     printReverseNumber(5);
//     return 0;
// }

//TC => BIG O(n)
//SC => BIG O(n)
// void printNumber(int start,int n){

//     if(start > n){
//         return;
//     }
//     cout <<start<<endl;
//     start++;
//     printNumber(start, n);
// };

// int main()
// {
//     cout << "DSA setup done with MSYS2 🚀" << endl;
//     printNumber(1,10);
//     return 0;
// }
