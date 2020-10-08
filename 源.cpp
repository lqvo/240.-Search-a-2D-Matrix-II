#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0)return false;
        for (int i = 0; i < matrix.size(); i++) {
            if (target < matrix[i][0])break;
            if (target > matrix[i].back())continue;
            if (binary_search(matrix[i].begin(), matrix[i].end(), target))return true;
        }
        return false;
    }
};