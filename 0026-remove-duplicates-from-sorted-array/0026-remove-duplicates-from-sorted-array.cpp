
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        set<int > s;
        vector<int > v;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);//s.insert na ki set.insert
        }
        set <int>::iterator it;//inp step
        nums.clear();//new vector me kiya tha to error
        for(it=s.begin();it!=s.end();++it)//int it nahi only it
    nums.push_back(*it);// * yad rakhna
        return nums.size();
    }
};