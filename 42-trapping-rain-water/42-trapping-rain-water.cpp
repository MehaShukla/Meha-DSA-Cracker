class Solution {
public:
    int trap(vector<int>& h) {
        if(h.size()==0)
            return 0;
        int n=h.size();
        vector<int> l(n);
        vector<int> r(n);
        int a=0;
        
        l[0]=h[0],r[n-1]=h[n-1];
        for(int i=1;i<n;i++)
            l[i]=max(l[i-1],h[i]);
            for(int i=n-2;i>=0;i--)
            r[i]=max(r[i+1],h[i]); 
        for(int i=1;i<n-1;i++)
          a+=(min(l[i],r[i])-h[i]);
        return a;
    }
};