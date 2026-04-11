class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> string_s;
        vector<char> string_t;
        int n_s = s.length();
        int n_t = t.length();
        for(int i = 0; i < n_s; i++){
            string_s.push_back(s[i]);
        }
        for(int i = 0; i < n_t; i++){
            string_t.push_back(t[i]);
        }

        std::sort(string_s.begin(), string_s.end());
        std::sort(string_t.begin(), string_t.end());

        if (n_s != n_t){
            return false;
        }
        else{
            for(int i = 0; i < n_s; i++){
                if (string_s[i] == string_t[i]){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        
        return true; 
    }
};
