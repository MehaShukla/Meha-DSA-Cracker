class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int size=encoded.size();
        vector <int> output(size+1,0);
        output[0]=first;
        //output[1]=(first^encoded[0]);
        for(int i=1;i<size;i++)
        {
            output[i]=output[i-1]^encoded[i-1];
        }
        output[size]=output[size-1]^encoded[size-1];
        return output;
    }
};