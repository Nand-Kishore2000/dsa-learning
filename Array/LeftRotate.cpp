#include <bits/stdc++.h>
using namespace std;

// This is optimal approach - we have to rotate the array by K position, so From 0th to n - K index we will 
//divide array visually A, and n - k to nth index we can call B,
//just reverse the array A, then B and then whole array that's all

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.begin() + (n - k));
        reverse(nums.begin() + (n - k), nums.begin() + n);
        reverse(nums.begin(), nums.begin() + n);
    }
};