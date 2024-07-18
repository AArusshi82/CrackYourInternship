class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
       vector<vector<string>> ans;
       unordered_map<string,vector<string>> v;
        for(auto i:s)
        {
            string x=i;
            sort(i.begin(),i.end());
            v[i].push_back(x);
        }
        for(auto i:v)
        {
            vector<string> k=i.second;
            ans.push_back(k);
        }
        return ans;
    }
};