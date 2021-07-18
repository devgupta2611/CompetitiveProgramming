//Author: Devanshu Gupta
//In this ques we are provided with a tree, we have to find kth smallest element
//For eg: 
//Input: 8        (5)<-k
//    4     12
//   3 6   9  13

//Output: 9


void func(TreeNode* A, vector<int>& res){
    if(!A)return;
    func(A->left,res);
    res.push_back(A->val);
    func(A->right,res);
    return;
}

int Solution::kthsmallest(TreeNode* A, int B) {
    vector<int> res;
    func(A,res);
    return res[B-1];
}

//Make an array in ascending order using preorder traversal
//Question Link: https://www.interviewbit.com/problems/kth-smallest-element-in-tree/
