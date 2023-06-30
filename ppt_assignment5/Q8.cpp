#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findOriginalArray(std::vector<int>& changed) {
        std::unordered_map<int, int> counts;
        std::vector<int> original;
    
        for (int num : changed) {
            counts[num]++;
        }
        
        for (int num : changed) {
            
            if (counts[num] > 0 && counts[num * 2] > 0) {
                original.push_back(num);
                
                counts[num]--;
                counts[num * 2]--;
            }
        }
        
       
        for (const auto& pair : counts) {
            if (pair.second > 0) {
                return {};  
            }
        }
        
        return original;
    }
};
