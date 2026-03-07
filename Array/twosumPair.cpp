#include<bits/stdc++.h>
using namespace std;

// Question: we have given arr unique integer array and a
//  target and we need to return the pair of two numbers which sum would be equals to target
// e.g [1,7,3,5,8,21,23,0] , target = 8 so output: {{1,7},{3,5}{8,0}}
//THEORY: in the brute force approach we were using another for loop to look into the remaining array for the complement value
// which (currentvalue - target) so instead a loop we can use a hashmap where we will insertthe iterated values 
// and when we have to look for the 2nd value we can check in O(1) and insert that value into ans vector array.

//OPTIMAL APPROACH O(N2)
vector<pair<int, int>> twoPairSum(vector<int> nums, int target)
{
    vector<pair<int, int>> ans;
    unordered_map<int,int> mpp;

    for(int i=0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(mpp.count(complement)){
            ans.push_back({complement, nums[i]});
        }
        mpp[nums[i]] = i;
    }
    return ans;
}

// BRUTE APPROACH O(N2)
// vector<pair<int, int>> twoPairSum(vector<int> nums, int target)
// {
//     vector<pair<int, int>> ans;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i+1; j < nums.size(); j++){   
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back({nums[i], nums[j]});
//             }
//         }
//     }
    
//     return ans;
// }

int main(){
    vector<int> arr = {1, 7, 3, 5, 8, 21, 23, 0};
    int target = 8;

    vector<pair<int, int>> result  = twoPairSum(arr,target);

    for( auto i: result){
        cout << "{" << i.first <<"," << i.second << "}";
    }
    
     return 0;
}

