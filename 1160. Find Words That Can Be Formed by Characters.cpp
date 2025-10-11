// You are given an array of strings words and a string chars.

// A string is good if it can be formed by characters from chars (each character can only be used once for each word in words).

// Return the sum of lengths of all good strings in words.

 

// Example 1:

// Input: words = ["cat","bt","hat","tree"], chars = "atach"
// Output: 6
// Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
// Example 2:

// Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
// Output: 10
// Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int total = 0;
        vector<int> freq(26, 0);

        // Count characters in 'chars'
        for (char ch : chars) freq[ch - 'a']++;

        // Check each word
        for (string word : words) {
            vector<int> copy = freq;
            bool valid = true;

            for (char w : word) {
                if (--copy[w - 'a'] < 0) { // used more than available
                    valid = false;
                    break;
                }
            }

            if (valid) total += word.size();
        }

        return total;
    }
};




// another solution 
unordered_map<char,int>freq;
for(char c :chars){
    freq[c]++;
}

int total=0;
for(char  word:words){
    unordered_map<char,int>temp;
    bool good=true;

    for(char s:word){
        temp[s]++;
        if(temp[s]>freq[s]){
            good=false;
            break;
        }
    }
    if(good){
        total+=word.size()
    }
    
}
return total;