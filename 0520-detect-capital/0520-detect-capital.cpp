class Solution {
public:
    bool detectCapitalUse(string word) {
        string m="",u="",l="";
        m+=toupper(word[0]);
        for(char c:word)
        {
        u +=toupper(c);
        l+=tolower(c);
        }
        for(int i=1;i<word.size();i++)
        {
            m+=tolower(word[i]);
        }
        if(u==word||l==word||m==word)
            return true;
        return false;
        
    }
};