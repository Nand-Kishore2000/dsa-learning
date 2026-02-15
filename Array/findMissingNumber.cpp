// Find the Missing Number

// in this qtn we need to find out missing number in give size of an arr is N-1
// Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

//for eg Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.

// Input: arr[] = [1, 2, 3, 5] => [1,2,3,4,5]
// Output: 4
// Explanation: Here the size of the array is 4, so the range will be [1, 5]. The missing number between 1 to 5 is 4

#include <bits/stdc++.h>
using namespace std;

// 0^0 =0 1^1 = 0, 2^2=0, 1^0 = 1, 2^0 = 2
// Optimal approach using xor
int findMissingNum3(vector<int> arr)
{
    int n = arr.size() + 1;
    int xor1 = 0;//given array xor 
    int xor2 = 0;// actual 1 to N variable xor

    for (int i = 1; i <=n - 1; i++)// xor1 from 0(i-1) to 7 (n - 1)
    {
        xor1^=arr[i-1];
        xor2^=i;
    }
    xor2^n;//xor2 should be 1 - 8 (N) so needto add  ...^8 also because in earlier loop it only xor until 7

    return xor1^xor2;
}

// optimal approach :sum of all ele and return diff
int findMissingNum2(vector<int> arr)
{
    int n = arr.size()+1;
    int sum1 = n * (n + 1)/2;
    int sum2 = 0;


    for (int i = 0; i < n - 1; i++)
    {
       sum2 += arr[i];
    }

  
    return (sum1 - sum2);
}


// better approach
int findMissingNum1(vector<int> arr)
{
    int n = arr.size() + 1;

    // assign a freq arr;
    vector<int> hash(n+1, 0);

    for(int i=0; i<n-1; i++)
    {
        hash[arr[i]]++;
    }


    for(int i=1; i<n+1; i++ ){
        if(hash[i] == 0){
            return i;
        }
    }
    return  -1;
}

int main(){
    vector<int> arr = {8,4, 2, 1,6,3, 7};

    int result = findMissingNum2(arr);
    cout << result ;
    return 0;
}