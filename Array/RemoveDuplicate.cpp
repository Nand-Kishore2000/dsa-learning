#include <bits/stdc++.h>
using namespace std;

//Leetcode No 26 - Remove duplicate=> 
// Brute force approach- we need to iterate over the array and pick one by one ele and put it in the set 
// and in next iterator we will just iterate over the set and put back those values into array first positions 
// and in term of return unique value we will return just size of set; 
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        set<int> st;

        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        int i = 0;
        for (int value : st)
        {
            nums[i] = value;
            i++;
        }

        return st.size();
    }
};



// Optimal approach - two pointer approach
// In this we resolve this issue with single loop with only 1 variable space
// there will be two points j, i
// J's duties is stick on the first unique values to remeber where we need to place the new unique values
//i will iterate from 1st index to n-1 and compare with nums[i] != nums[j] if both are not same then we need to 
//put that i value at j+1 index
// in last we return J+1 index as j start from 0 so we need to return number of unique elements
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int j = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[j] != nums[i])
            {
                nums[j + 1] = nums[i];
                j++;
            }
        }
        return j + 1;
    }
};
