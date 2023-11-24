class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        for(auto i : s)
            m[i]++;
        for(auto i : t)
        {
            m[i]--;
            if(m[i]==0)
                m.erase(i);
        }
        return m.size()==0;
    }
};