class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int count = 0;
        unordered_map<char, int> StonesCount;

        for(int i = 0; i < stones.length(); i++)
            StonesCount[stones[i]]++;

        for(int i = 0; i < jewels.length(); i++)
            count += StonesCount[jewels[i]];

        return count;
    }
};