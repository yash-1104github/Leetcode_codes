class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size() ,  i = 0 , count = 0; 
        while(i < n){
            if(s[i] == 'O'){
                i++;
            }
            else{
               count++;
               i += 3;
            } 
        }
        return count;
    }
};
