class Solution {
  public:
    int findPair(int n, int x, vector<int> &a) {
        // code here
        sort(a.begin(),a.end());
        int i=0,s=a.size()-1,j=i+1;
        while(j<=s)
        {
            if(i!=j&&a[j]-a[i]==x)
            return 1;
            else if(a[j]-a[i]>x)
            ++i;
            else
            ++j;
        }
        return -1;
    }
};