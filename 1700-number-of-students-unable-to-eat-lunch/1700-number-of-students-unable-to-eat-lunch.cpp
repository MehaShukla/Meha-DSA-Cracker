class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sandwich;
        queue<int>student;
        for(int i=sandwiches.size()-1;i>=0;i--)
        {
            sandwich.push(sandwiches[i]);
            
        }
        for(auto i:students)
        {
            student.push(i); 
        }
           int c=0; 
        while(1)
        {
        if(student.empty())
            {
                return 0;
            }
        if(sandwich.top()==student.front())
        {
            sandwich.pop();
            student.pop();
            c=0;
        }
        else
        {
            c++;
            int temp=student.front();
            student.pop();
            student.push(temp);
            if(c==student.size())
                return student.size();
        }
        }
    }
};