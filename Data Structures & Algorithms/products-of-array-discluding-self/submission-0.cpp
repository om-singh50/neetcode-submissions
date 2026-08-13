class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int pre=1;
        int suf=1;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            prefix.push_back(pre);
            pre=pre*nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            suffix.push_back(suf);
            suf=suf*nums[i];
        }
        reverse(suffix.begin(), suffix.end());
        for(int i=0; i<nums.size(); i++){
            ans.push_back(prefix[i]*suffix[i]);
        }
        return ans;
    }
};
