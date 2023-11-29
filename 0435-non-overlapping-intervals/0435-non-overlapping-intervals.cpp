class Solution {
public:
    static bool compare(vector<int>v1,vector<int>v2){
        return v1[0]<v2[0];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
     int start,end,count=0,last_str=INT_MAX,last_end = INT_MIN, n=intervals.size();
	 
     if(n==0){ 
            return 0; 
     }

     //sort intervals
     sort(intervals.begin(),intervals.end(),compare);

	for(auto i: intervals){
		start = i[0];
		end = i[1];
		//overlap intervals
		if(start<last_end){
			if(end<last_end){
				last_str = start;
				last_end = end;
            }
            count++;
        }
        else {
            last_str = start;
            last_end = end;
        }
    }
    return count; 
    }

};