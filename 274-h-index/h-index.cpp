#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> counts(n + 1, 0);

        for (int c : citations) {
            counts[min(n, c)]++;
        }

        int total_papers = 0;
        for (int i = n; i >= 0; i--) {
            total_papers += counts[i];
            if (total_papers >= i) {
                return i;
            }
        }
        
        return 0;
    }
};