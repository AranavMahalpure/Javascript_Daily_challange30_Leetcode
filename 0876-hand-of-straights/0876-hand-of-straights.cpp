class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        unordered_map<int,int>freqMap;
        for(auto card:hand){
            freqMap[card]++;
        }
         // Step 3: Try to form groups starting from the smallest card
    for (int card : hand) {
        if (freqMap[card] == 0) {
            // This card has already been used in forming a previous group, skip it
            continue;
        }

        // Try to form a group starting from this card
        for (int i = 0; i < groupSize; i++) {
            int currCard = card + i;
            if (freqMap[currCard] == 0) {
                // If any of the cards in the group can't be formed, return false
                return false;
            }
            // Reduce the count of the current card in the frequency map
            freqMap[currCard]--;
        }
    }

    // If all groups are successfully formed, return true
    return true;
    }
};