class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        vector<vector<int>>v;
        vector<int> ans;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            v.push_back({i.first, i.second});
        }
        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1]<b[1];
        });
        int i=v.size()-1;
        while(k){
            ans.push_back(v[i][0]);
            i--;
            k--;
        }
        return ans;
    }
};
