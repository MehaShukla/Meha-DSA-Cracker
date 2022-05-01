class Solution {
public:
    int minimumSum(int num) {
        vector<int> v(4);
        int c=0;
        while(num!=0)
        {
            v[c++]=(num%10);
            num/=10;
        }
        sort(v.begin(),v.end());
        return((v[1]*10+v[3])+(v[0]*10+v[2]));
    }
};