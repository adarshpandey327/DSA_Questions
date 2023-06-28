#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0, upper = 99;

    vector<string> result;

   
    for (int num = lower; num <= upper; num++) {
       
        bool found = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == num) {
                found = true;
                break;
            }
        }
        if (!found) {
            
            int end = num;
            while (end <= upper) {
                bool foundEnd = false;
                for (int i = 0; i < nums.size(); i++) {
                    if (nums[i] == end) {
                        foundEnd = true;
                        break;
                    }
                }
                if (foundEnd) {
                    break;
                }
                end++;
            }
            result.push_back((end == num) ? to_string(num) : to_string(num) + "->" + to_string(end));
            num = end;
        }
    }

    for (const auto& range : result) {
        cout << range << " ";
    }
    cout << endl;

    return 0;
}
