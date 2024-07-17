class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
       int i=1,j=1;
       map<int,int> mp;
       mp[a[0]]=0;
       while(i<a.size())
       {
        if(mp.find(target-a[i])!=mp.end())
        return {i,mp[target-a[i]]};
        else
        mp[a[i]]=i;
        ++i;
       }
       return {i,j};
    }
};
