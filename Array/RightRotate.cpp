#include <bits/stdc++.h>
using namespace std;
/*
   To right shift the array with dth index means, [1,2,3,4,5,6,7]; => [6,7,1,2,3,4,5]
   means from 0th index to (n - d)th index array should be moved to the right side and other side all the elemets
   from (n - d)th index to n-1 index should be moved to left side
   */
// Visualize arr into two parts
// 1st part from  0 to (n - d)th index,   ====  arr1 [1,2,3,4,5];
// 2nd part from d+1th inde to n-1; ==== arr2   [6,7];

void RightRotate(int arr[], int n, int d){

    //Step 1: reverse arr1
    reverse(arr,arr + (n- d));

    // Step 2: reverse arr2
    reverse(arr + (n - d), arr + n);

    // Step 2: reverse entire array
    reverse(arr, arr + n);
}


int main()
{
    int n = 7;
    int d = 2;
    int arr[n] = {1,2,3,4,5,6,7};

    RightRotate(arr,n,d);

    for(int i = 0; i<n; i++)
    {
        cout<<arr[i];
    }

   
    return 0;
}