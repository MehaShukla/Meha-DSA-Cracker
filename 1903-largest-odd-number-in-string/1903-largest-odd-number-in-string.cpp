class Solution {
public:
    string largestOddNumber(string num) {
       std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        string temp = "";
        temp = temp+num[num.size()-1];
        if(stoi(temp)%2!=0)
        {
            return num;
        }
        else
        {
            for(int i = num.length()-1;i>=0;i--)
            {
                string hold = "";
                hold += num[i];
                if(stoi(hold)%2!=0)
                {
                    return num.substr(0,i+1);
                }
            }
        }
        return "";
    }
};