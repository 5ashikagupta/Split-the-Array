class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int size=nums.size()/2;
        if (size==1){
            return true;
        }
        priority_queue<int,vector<int>>pq(nums.begin(),nums.end());
        stack<int>st1;
        stack<int>st2;
        while (size--){
            int top1=pq.top();
            pq.pop();
            if (!st1.empty() && st1.top() == top1 ){return false;}
            st1.push(top1);
            int top2=pq.top();
            pq.pop();
            if (!st2.empty() && st2.top() == top2 ){return false;}
            st2.push(top2);
        }
        return true;
        
    }
};
