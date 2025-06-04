#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mapp;
        for(int i=0;i<nums.size();i++){
            int compli = target - nums[i];
            if(mapp.find(compli) != mapp.end()){
                return {mapp[compli], i};
            }
            mapp[nums[i]] = i;
    }
    return {-1, -1};
}

int main(){
    int n, target;
    cin>>n>>target;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
};