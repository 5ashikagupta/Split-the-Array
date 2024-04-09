Problem Statement
Given an integer array nums of even length, the task is to split the array into two parts nums1 and nums2 such that:
nums1.length == nums2.length == nums.length / 2.
nums1 should contain distinct elements.
nums2 should also contain distinct elements.
The function should return true if it is possible to split the array according to the above conditions, and false otherwise.
Approach:
Initialize a variable size to store the size of each split array, which is nums.size() / 2.
If size is equal to 1, return true because splitting into two arrays of size 1 with distinct elements is always possible.
Create a max-heap (priority queue) pq using the elements of the input array nums. This will ensure that the largest elements are at the top of the heap.
Initialize two stacks st1 and st2 to store elements for split arrays nums1 and nums2.
While size is greater than 0, do the following:
Pop the top element (top1) from the heap pq, and push it onto st1.
If st1 is not empty and the top element of st1 is equal to top1, return false. This ensures distinctness in nums1.
Pop the next top element (top2) from the heap pq, and push it onto st2.
If st2 is not empty and the top element of st2 is equal to top2, return false. This ensures distinctness in nums2.
Decrement size by 1 in each iteration.
If the loop completes successfully without returning false, return true.
Complexity Analysis:
Time Complexity: The time complexity of this approach is O(n log n), where n is the length of the input array nums. This is because building the priority queue takes O(n log n) time, and in each iteration, we perform constant-time operations like pushing and popping from stacks.
Space Complexity: The space complexity is O(n) due to the priority queue and the two stacks, st1 and st2, each potentially storing up to n/2 elements.
