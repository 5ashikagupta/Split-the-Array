Approach 
Initialize a max-heap (priority queue) with the elements of nums to ensure largest elements are at the top.
Simultaneously pop pairs of elements from the heap, pushing one element to st1 and the other to st2, ensuring distinctness in each stack.
If at any point, a popped element is equal to the top element of its respective stack, return false; otherwise, return true if the loop completes successfully.
