// Union of Two Sorted Arrays
//Problem Statement : Given two sorted arrays, arr1, and arr2 of size n and m.Find the union of two sorted arrays.The union of two arrays can be defined as the common and distinct elements in the two arrays.
//NOTE : Elements in the union should be in ascending order.
//for example arr1= [1,2,3,4,5,7,7] , arr2 = [2,3,5,7,7,8,9]  then ans should be [2,3,5,7] bcoz these are present on both array.

#include<bits/stdc++.h>
using namespace std;

//better approach : HINT: USE TWO POINTER  TC -> O(N + M), SC-> O(N)
vector<int> getUnion(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    vector<int> uniqueArr;
    int i = 0;
    int j= 0;

    while(i < n && j< m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
            uniqueArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return uniqueArr;


}

//Brute force approach
// vector<int> getUnion(vector<int> arr1, vector<int> arr2)
// {
//     int n = arr1.size();
//     int m = arr2.size();

//     vector<int> uniqueArr;

//     for(int i=0; i<n; i++){

//         for(int j=0; j<m; j++){
//             if(arr1[i] == arr2[j]){
//                 uniqueArr.push_back(arr1[i]);
//                 break;
//             }
//             // as it is sorted so only iteration till i <= j else break;
//             if (arr2[j] > arr1[i])
//             {
//                 break;
//             }
//         }


      
//     }
//         return uniqueArr;


// }

int  main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //{1, 2, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 4, 4, 5, 11, 12}; //{2, 3, 5, 7, 8, 9};

    vector<int>
        ans = getUnion(arr1, arr2);

    for(auto value:ans){
        cout << value;
    }
    return 0;
}