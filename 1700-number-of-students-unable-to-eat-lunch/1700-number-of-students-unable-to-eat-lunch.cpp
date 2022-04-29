class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n1 = students.size();
     int n2  = sandwiches.size();
        int countOfOneInStudent=0,countOfZeroInStudent=0;
    for(int i=0; i<n1; i++) {
        if(students[i] == 0) {
            countOfZeroInStudent++;
        } else {
            countOfOneInStudent++;
        }
    }
        
        
   for(int i=0;i<n2; i++) {
       if(sandwiches[i] == 0) {
            if(countOfZeroInStudent) countOfZeroInStudent--;
            else return countOfOneInStudent;
       } else {
            if(countOfOneInStudent) countOfOneInStudent--;
            else return countOfZeroInStudent;
           
       }
   }     
        
    return 0; 
    }
};