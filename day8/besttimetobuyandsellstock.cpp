class Solution {
public:
    int maxProfit(vector<int>& a) {
     
      int mi=a[0],ma=0;
      for(int i=0;i<a.size();i++)
      {
        mi=min(mi,a[i]);
        int p=a[i]-mi;
        ma=max(ma,p);
      }
     
      return ma;
    }
};