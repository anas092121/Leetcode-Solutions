#include <vector>
#include <unordered_map>

class Solution {
public:
    bool isPossible(std::vector<int>& nums) {
        std::unordered_map<int, int> freq, seqEnds;

        // Count occurrences of each number
        for (int num : nums) {
            freq[num]++;
        }

        for (int num : nums) {
            if (freq[num] == 0) continue;

            // If we can extend a sequence ending at num-1
            if (seqEnds[num - 1] > 0) {
                seqEnds[num - 1]--;
                seqEnds[num]++;
            }
            // Otherwise, try to start a new sequence with num, num+1, num+2
            else if (freq[num + 1] > 0 && freq[num + 2] > 0) {
                freq[num + 1]--;
                freq[num + 2]--;
                seqEnds[num + 2]++;
            } else {
                return false;  // Can't form a sequence
            }

            freq[num]--;  // Mark num as used
        }

        return true;
    }
};
