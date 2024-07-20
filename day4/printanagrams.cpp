class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& s) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto i:s)
        {
            string x=i;
            sort(i.begin(),i.end());
            mp[i].push_back(x);
        }
        for(auto i:mp)
        {
            vector<string> v=i.second;
            ans.push_back(v);
        }
        return ans;
    }
};