class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int> dict;
        for(char &ch : s){
            dict[ch]++;
        }
        for(char &ch :t){
            if(dict.find(ch)!=dict.end()&& dict[ch]!=0){
                dict[ch]--;
            }else{
                return false;
            }
        }
        return true;
    }
};
