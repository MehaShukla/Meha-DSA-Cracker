class Solution {
public:
    int count(vector<int> start,int n,string s)
    {
        int steps = 0;
        int i = start[0];
        int j = start[1];
        for(int k = 0;k<s.length();k++)
        {
            if(s[k]=='L'&&j>0)
            {
                steps++;
                j--;
            }
            else if(s[k]=='R'&&j<n-1)
            {
                steps++;
                j++;
            }
            else if(s[k]=='U'&&i>0)
            {
                steps++;
                i--;
            }
            else if(s[k]=='D'&&i<n-1)
            {
                steps++;
                i++;
            }
            else 
            {
                break;
            }
        }
        return steps;
    }
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> res;
        for(int i = 0;i<s.length();i++)
        {
            res.push_back(count(startPos,n,s.substr(i)));
        }
        return res;
    }
};