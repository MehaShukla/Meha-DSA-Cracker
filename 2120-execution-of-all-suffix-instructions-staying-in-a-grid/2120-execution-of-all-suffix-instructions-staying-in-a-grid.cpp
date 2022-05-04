class Solution {
public:

    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
       int len = s.size(), count = 0;
            vector<int> ans(len);
              for(int i = 0; i < len; i++){
                int start_x = startPos[0];
                int start_y = startPos[1];
                int count = 0;
                for(int j = i; j < len; j++){
                    char ch = s[j];
                    if(ch == 'R' && start_y+1 < n){
                        start_y++;
                        count++;
                    }
                    else if(ch == 'D' && start_x+1 < n){
                        start_x++;
                        count++;
                    }
                    else if(ch == 'L' && start_y-1 >= 0){
                        start_y--;
                        count++;
                    }
                    else if(ch == 'U' && start_x-1 >= 0){
                        start_x--;
                        count++;
                    }
                    else {
                        break;
                    }
                }
                ans[i] = count;
            }
            return ans;
    }
};