void BFS(TreeNode* root){
     vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root == NULL){
            return root;
        }
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i = 0;i<size;i++){

            TreeNode* node = q.front();
            q.pop();
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }

            level.push_back(node->val);

            }

            v.push_back(level);

        }

}

