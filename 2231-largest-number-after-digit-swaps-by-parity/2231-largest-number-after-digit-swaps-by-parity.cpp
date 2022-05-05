class Solution {
public:
    int largestInteger(int num) {
     priority_queue<int> qOdd,qEven;
        string hold = to_string(num);
        while(num)
        {
            int d = num%10;
            if(d%2==0)
            {
                qEven.push(d);
            }
            else
            {
                qOdd.push(d);
            }
            num = num/10;
        }
        int finalans = 0;
        for(auto x:hold)
        {
            string s = "";
            s = s+x;
            if(stoi(s)%2==0)
            {
                finalans = (finalans*10) + qEven.top();
                qEven.pop();
            }
            else
            {
                finalans = (finalans*10) + qOdd.top();
                qOdd.pop();
            }
        }
        return finalans;   
    }
};