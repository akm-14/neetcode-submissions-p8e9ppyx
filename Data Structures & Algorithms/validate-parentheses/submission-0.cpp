class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        int n = s.size();
        for (int i = 0; i < n; i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stac.push(s[i]);
            }
            else if (!stac.empty() && ((s[i] == ')' && stac.top() == '(') || (s[i] == ']' && stac.top() == '[') || (s[i] == '}' && stac.top() == '{'))){
                stac.pop();
            }
            else{
                return false;
            }
        }

        if (stac.empty()){
            return true;
        }
        else{
            return false;
        }

    }
};
