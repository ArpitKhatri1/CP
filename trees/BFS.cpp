#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pbk push_back
#define vi vector<int>
#define mp map<int,int>
#define vvi vector<vi>
#define vb vector<bool>
#define pi pair<int,int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define fr(i, n) for (long long i = 0 ; i < n; i++)
#define fo(i, n) for (ll i = n - 1; i >= 0;i--)
#define cin(a,n)  vll a; fo(i,n) {ll temp;cin>>temp;a.pbk(temp);}
#define cout(a) for(auto i:a) cout<<i<<" ";
#define sz(a) (int)(a.size())
#define srt(a) sort(a.begin(),a.end())
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

vvi BFS(TreeNode* root){
    vvi v;
    queue<TreeNode*> q;
    if(root == NULL){
        return v;
    }
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vi level;
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

    return v;

}

int main(){
    ll t ;
    cin>>t;
    while(t--){
        solve();
    }

return 0;
}

