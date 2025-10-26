class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        // Mark broken letters
        vector<bool> broken(26, false);
        for (char c : brokenLetters) {
            broken[c - 'a'] = true;
        }

        int countGood = 0;
        string word;
        // Use stringstream to break text into words by spaces
        istringstream iss(text);
        while (iss >> word) {
            bool ok = true;
            for (char c : word) {
                if (broken[c - 'a']) {
                    ok = false;
                    break;
                }
            }
            if (ok) {
                countGood++;
            }
        }
        return countGood;
    }
};