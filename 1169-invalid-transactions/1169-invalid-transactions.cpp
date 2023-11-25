class Solution {
public:
    void fillData(vector<string>& transactions, vector<string>& name, vector<int>& time, vector<int>& amt, vector<string>& city) {
        for(auto &str : transactions) {
            string s = "";
            int x = 1;
            for(int i = 0; i < str.length(); i++) {
                if(str[i] == ',') {
                    if(x == 1) {
                        name.emplace_back(s);
                        ++x;
                        s = "";
                    } else if(x == 2) {
                        time.emplace_back(stoi(s));
                        ++x;
                        s = "";
                    } else if(x == 3) {
                        amt.emplace_back(stoi(s));
                        ++x;
                        s = "";
                    }
                } else s += str[i];
            }
            city.emplace_back(s);
        }
    }

    vector<string> invalidTransactions(vector<string>& transactions) {
        vector<string> name, city;
        vector<int> time, amt;

        // Segregate the whole data
        fillData(transactions, name, time, amt, city);

        unordered_map<string, vector<int> > m;
        set<int> ans; // Filling all the indices of the invalid transactions

        for(int i = 0; i < transactions.size(); i++) {
            // Condition 1 - the amount exceeds $1000
            if(amt[i] > 1000) ans.insert(i);

            // Condition 2 - if it occurs within (and including) 60 minutes of another transaction with the same name in a different city.
            if(m[name[i]].size() > 0) {
                for(int j = 0; j < m[name[i]].size(); j++) {
                    if(city[i] != city[m[name[i]][j]] && abs(time[i]-time[m[name[i]][j]]) <= 60) {
                        ans.insert(m[name[i]][j]);
                        ans.insert(i);
                    }
                }
            }

            m[name[i]].emplace_back(i);
        }

        // Filling all the answer to the problem
        vector<string> res;
        for(auto &i : ans) res.emplace_back(transactions[i]);
        return res;
    }
};