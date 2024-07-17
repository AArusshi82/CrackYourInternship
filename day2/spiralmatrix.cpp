class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
     int d=0;
     int l=0,r=a[0].size()-1;
     int t=0,b=a.size()-1;
     vector<int> v;
     while(l<=r&&t<=b)
     {
        if(d==0)
        {
            for(int i=l;i<=r;i++)
            v.push_back(a[t][i]);
            ++t;
            

        }
        else if(d==1)
        {
            for(int i=t;i<=b;i++)
            v.push_back(a[i][r]);
            --r;
        }
        else if(d==2)
        {
            for(int i=r;i>=l;i--)
            v.push_back(a[b][i]);
            --b;
        }
        else if(d==3)
        {
            for(int i=b;i>=t;i--)
            v.push_back(a[i][l]);
            ++l;
        }
        d=(d+1)%4;
     }
     return v;


    }
};
