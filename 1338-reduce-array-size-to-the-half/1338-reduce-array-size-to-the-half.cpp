class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        int k=n;
        int c=0;
        map<int,int>v;
        priority_queue<int> pq;
        for(auto i:arr)
        {
          v[i]++;   
        } 
         for(auto i:v)
        {
          pq.push(i.second);    
        } 
        while(k>n/2)
        {
            k-=pq.top();
             pq.pop(); 
            c++;
        }
       return c;
    }
};