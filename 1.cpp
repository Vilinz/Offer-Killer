#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int tag = -1;
        for(int i = 0; i < array.size(); i++) {
            if(array[i][0] < target) {
                int m = array[0].size()/2;
                int start = 0, end = array[0].size();
                while(start < end) {
                	cout << start << " " << end << endl;
                    m = start + (end - start)/2;
                    if(array[i][m] == target) {
                        return true;
                    } else if(array[i][m] < target) {
                        start = m + 1;
                    } else {
                        end = m - 1;
                    }
                }
            }
        }
        return false;
    }
};

int main() {
	vector<vector<int>> arr{{1,3,6},{2,4,8}};
	Solution s;
	cout << s.Find(5,arr) << endl;
	return 0;
} 
