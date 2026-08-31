class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prevNode = head;
        ListNode* cur = head->next;

        int i = 1;
        int prevCriticalPos = -1;
        int firstCriticalPos = -1;
        int minDist = INT_MAX;

        while (cur->next != NULL) {
           
            if ((prevNode->val > cur->val && cur->val < cur->next->val) ||
                (prevNode->val < cur->val && cur->val > cur->next->val)) {

                if (firstCriticalPos == -1) {
                    
                    firstCriticalPos = i;
                } else { 
                    minDist = min(minDist, i - prevCriticalPos);
                }
 
                prevCriticalPos = i;
            }

            i++;
            prevNode = cur;
            cur = cur->next;
        }
 
        if (firstCriticalPos == -1 || prevCriticalPos == firstCriticalPos)
            return {-1, -1};
 
        int maxDist = prevCriticalPos - firstCriticalPos;

        return {minDist, maxDist};
    }
};