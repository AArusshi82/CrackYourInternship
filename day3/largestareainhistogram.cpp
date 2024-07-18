class Solution {
public:

vector<int> f1(vector<int>& a)
{
    int n = a.size();
        vector<int> ps(n, -1);
        stack<int> st;
    for(int i=0;i<a.size();i++)
    {
        while (!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ps[i] = st.top();
            }
            st.push(i);
    }
    return ps;
}

vector<int> f2(vector<int>& a)
{
    int n = a.size();
        vector<int> ns(n, n);
        stack<int> st;
    for(int i=a.size()-1;i>=0;i--)
    {
         while (!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ns[i] = st.top();
            }
            st.push(i);
    }
    return ns;
}
    int largestRectangleArea(vector<int>& a) {
      int n=a.size();
        
        

        vector<int> ps = f1(a);;
        vector<int> ns = f2(a);
        
         
       
        int ma=INT_MIN;
for(int i=0;i<a.size();i++)
{
    ma=max(ma,(ns[i]-ps[i]-1)*a[i]);
}
return ma;
    }
};