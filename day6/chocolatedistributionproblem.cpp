class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long mi=LLONG_MAX;
    sort(a.begin(),a.end());
    for(int i=0;i<=a.size()-m;i++)
    {
        mi=min(mi,abs(a[i]-a[i+m-1]));
    }
    return mi;
    }   
};