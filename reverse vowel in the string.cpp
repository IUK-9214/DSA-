// reverse the vowel in the string 




class Solution {
private:
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;

        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return true;

        return false;
    }   

public:
    string reverseVowels(string s) {
        for(int i = 0, j = s.size() - 1; i < j;) {
            if(isVowel(s[i]) && isVowel(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;

                continue;
            }

            if(!isVowel(s[i]))
                i++;

            if(!isVowel(s[j]))
                j--;
        }

        return s;
    }
};