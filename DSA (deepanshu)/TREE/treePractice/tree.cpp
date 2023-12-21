#include <iostream>
#include <queue>
using namespace std;
class Node{
    public:
    int Data;
    Node* left;
    Node* right;

    // constructur
    Node(int data){
        this->Data = data;
        this->left = NULL;
        this->right = NULL;
    }

    // distructur
    ~Node(){
        int data = this->Data;
        cout<<"the memory for the node:- "<<data<<"  is now deleted"<<endl;
    }
};

// construct the tree using the bfs
void constructTree(Node* &root){
    queue<Node*> q;
    cout<<"enter the root data of the tree:- "<<endl;
    int data;
    cin>>data;
    if(data == -1){
        root = NULL;
        return;
    }
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter the left node data:- "<<temp->Data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"enter the right node data:- "<<temp->Data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

// traversal of the tree
void BfsTraversal(Node* &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->Data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// dfs traversal

// inorder
void inOrderTraversal(Node* &root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->Data<<" ";
    inOrderTraversal(root->right);
}

// preorder
void preOrderTraversal(Node* &root){
    if(root == NULL){
        return;
    }
    cout<<root->Data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// postorder 
void preOrderTraversal(Node* &root){
    if(root == NULL){
        return;
    }
    cout<<root->Data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// height of the binary tree
int height(Node* &root){
    if(root == NULL){
        return;
    }
    return max(height(root->left), height(root->right)) + 1;
}

// diameter of the binary tree
int diameter(Node* &root){
    if(root == NULL){
        return;
    }
    int left = diameter(root->left);
    int right = diameter(root->right);

    int center = height(root);
    return max(left, max(right, center));
}

// iptamize way to find the height and the diameter fo the binary tree
pair<int,int> diameterHeight(Node* &root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    
    pair<int,int>left = diameterHeight(root->left);
    pair<int,int>right = diameterHeight(root->right);

    int leftHeight = left.first;
    int rightHeight = right.first;
   
    int diameterThroughRoot = leftHeight + rightHeight + 1;
    int height = max(leftHeight, rightHeight) + 1;

    int diameter = max(left.first, max(right.first, diameterThroughRoot));

    pair<int, int> ans;
    ans.first = diameter;
    ans.second = height;

    return ans;
}

// tree isbalance or not 
pair<int, bool> isBalanceTree(Node* &root){
    if(root == NULL){
        pair<int, bool> p = make_pair(0, true);
        return p; 
    }

    int 
}

int main(){
    Node* root = NULL;
    cout<<endl;
    pair<int, int> result = diameterHeight(root);
    cout << "Diameter: " << result.first << ", Height: " << result.second << endl;
    cout<<endl;

    return 0;
}