//Author: Devanshu Gupta
//In this ques we are given an array and we have to find out that Is given array a valid preorder BST or not?? 
//For eg: 
//Input: A = [7, 7, 10, 10, 9, 5, 2, 8]
//Output: 0

int Solution::solve(vector<int> &A) {
    int m = INT_MIN;
    int n = A.size();
    for(int i=0;i<n-1;i++){
        if(A[i+1]>A[i])m=max(m,A[i]);
        if(A[i]<m)return 0;
    }
    if(A[n-1]<m)return 0;
    return 1;
}
// We have to just update here the lower limit possible for the element of the array, as upper limit can be anything.
//Question Link: https://www.interviewbit.com/problems/valid-bst-from-preorder/
