#include<bits/stdc++.h>
using namespace std;
//two pointer
void reverseArray(int i, int arr[], int n){

    if(i >= n/2) return;

    swap(arr[i],arr[n - i - 1]);   // passing the actual reference of memory of arr [i]//0x100,  arr[n - i -1]//0x110
    reverseArray(i + 1, arr, n);
}



int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    reverseArray(0,arr,n);

    for(int i=0; i<n; i++){
        cout << arr[i] <<endl;
    }

    return 0;
}