class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int X=0;
        int n=o.size();
        for(int i=0;i<n;i++)
        {
            if(o[i][0]=='X')
            {
                if(o[i][1]=='+')
                    X++;
                else
                    X--;
            }
            else
            {
                if(o[i][1]=='+')
                    ++X;
                else
                    --X;
            }
        }
        return X;
    }
};