class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]=i;
        }
        for(int i=0; i<nums.size(); i++){
            int val=target-nums[i];
            if(mpp.find(val)!=mpp.end()){
                if(i!=mpp[val]){
                    ans.push_back(i);
                    ans.push_back(mpp[val]);
                    break;
                }
            }
        }
        return ans;
    }
};
