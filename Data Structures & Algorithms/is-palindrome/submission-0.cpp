class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string ans="";
        for(int i=0; i<n; i++){
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
                ans+=s[i];
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                ans+=s[i];
            }
            else if(s[i]>='0'&&s[i]<='9'){
                ans+=s[i];
            }
        }
        int l=0, r=ans.size()-1;
        while(l<r){
            if(ans[l]!=ans[r])return false;
            l++;
            r--;
        }
    return true;
    }
};
