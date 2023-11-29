class Solution {
public:
    bool checkIfPangram(string sentence) {
        std::unordered_set<char>st(sentence.begin(), sentence.end());
        return (st.size() == 26);
    }
};
