#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

         int maxCandies = *max_element(candies.begin(), candies.end());

        vector<bool> result;

        for (int currentCandies : candies) {

            result.push_back(currentCandies + extraCandies >= maxCandies);
        }
         return result;
    }
};