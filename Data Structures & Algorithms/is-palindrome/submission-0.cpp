class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i = 0;
        int j = n - 1;
        while(i <= j){
            if (i < j && !isalnum(s[i])){ // we have to ignore commas, fullstop, question marks, spaces, etc.
                i++;
                continue; //don't forget to continue to not look at the further cases rn
            }
            if (i < j && !isalnum(s[j])){
                j--;
                continue;
            }
            if (tolower(s[i]) == tolower(s[j])){ //since the string is case-insensitive here
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
