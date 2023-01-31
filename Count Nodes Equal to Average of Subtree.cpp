class Solution {
public:
   int ans;
   pair<int,int>count(TreeNode *root){
       if(root==NULL){
           return{ -1,0};
       }
       pair<int,int> lp=count(root->left);
       pair<int, int> rp=count(root->right);

       int l=0;
       int r=0;
       if (lp.first!=-1){
           l=lp.first;
       }
       if(rp.first!=-1){
           r=rp.first;
       }
       int res=(root->val+l+r)/(1+lp.second+rp.second);
       if(res==root->val){
           ans++;
       }
       return {root->val+l+r,1+lp.second+rp.second};
   }
   int averageOfSubtree(TreeNode* root){
       ans=0;
       count(root);
       return ans;
   }
};
