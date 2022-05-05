class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
         queue<pair<int,int> > q;
        int c=0;
        for(auto x:tickets)
        {
            if(k==c)
            {
                q.push({x,1});
            }
            else
            {
                q.push({x,0});
            }
            c++;
        }
        int time = 0;
        while(1)
        {
            if(q.front().first==0)
            {
                q.pop();
            }
            else
            {
                time++;
                q.front().first -=1;
                if(q.front().second==1&&q.front().first==0) 
                {
                    break;
                }
                if(q.front().first==0)
                {
                    q.pop();
                    continue;
                }
                q.push(q.front());
                q.pop();
            }
        }
        return time;
    }
    
};