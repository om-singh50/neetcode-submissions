class Solution {
public:
    string generateWord(string word){
        int n=word.size();
        vector<int> hash(26, 0);
        for(int i=0; i<n; i++){
            hash[word[i]-'a']++;
        }
        string ans="";
        for(int i=0; i<26; i++){
            int freq=hash[i];
            if(freq>0){
                ans+=string(freq, i+'a');
            }
        }
        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string, vector<string>>mpp;
        vector<vector<string>>res;

        for(int i=0; i<n; i++){
            string word=strs[i];
            string newWord=generateWord(word);
            mpp[newWord].push_back(word);
        }
        for(auto i:mpp){
            res.push_back(i.second);
        }
        return res;
    }
};
