    #include<bits/stdc++.h>
    using namespace std;

    //Question: we have given arr integer array and a
    // target and we need to return two indices which sum would be equals to target
    //e.g [4,5,3,2] , target = 6 so output: [0,3] indices like arr[0] + arr[3] (4 + 2) => 6

    //hashmap{{4:0},{5:1},{3:2},{2:4}} // {value: index}
    //THEORY: as we need to check two values which equal to target, then by iteratingover the values we have 1 value so like 
    // current value - target = complement so we need to check if there are any value in hashmap which equal to complement if yes
    //then return current value index and the complement index, OTHERWISE just insert the value and index into hashmap
    // OPTIMAL APPROCH - TC - O(N)


    vector<int> twoSum(vector<int> &nums, int target){

        unordered_map<int, int> mpp; // unordered_map<value, index>  // empty {}

        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];

            if (mpp.count(complement))
            {
                return {mpp[complement], i};
            }

            mpp[nums[i]] = i;

        }

        return {};
    }


    int main(){
        vector<int> arr = {4,5,3,2};
        int target = 8;

        vector<int> ans =  twoSum(arr,target);

        for (int i : ans)
        {
            cout << i << " ";
        }

        return 0;
    }
