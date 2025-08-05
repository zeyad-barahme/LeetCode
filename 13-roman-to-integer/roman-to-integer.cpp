#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int total = roman_map[s.back()];
        for (int i = s.length() - 2; i >= 0; --i) {
            if (roman_map[s[i]] < roman_map[s[i + 1]]) {
               
                total -= roman_map[s[i]];
            } else {
               
                total += roman_map[s[i]];
            }
        }
        return total;
    }
};
