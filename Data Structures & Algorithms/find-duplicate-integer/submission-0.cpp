class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int ans;
        for(int num:nums){
            if(st.find(num)!=st.end()) ans=num;;
            st.insert(num);
        }
        return ans;
    }
};
