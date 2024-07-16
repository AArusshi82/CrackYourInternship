class Solution {
public:
    int minMoves2(vector<int>& a) {
        sort(a.begin(),a.end());
       int c=0;
        int i=0,j=a.size()-1;
        while(i<a.size()&&j>=0&&i<=j)
        {
            if(i!=j)
           { int x=abs(a[i]-a[j]);
            c+=x;
           }
           ++i;
            --j;
        }
        return c;
    }
};