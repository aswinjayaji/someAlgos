#include<iostream>
#include<bits/stdc++.h>
#define COUNT 10
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void print2DUtil(Node *root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space +=COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    cout<<endl;
    for (int i = COUNT; i < space; i++)
        cout<<" ";
    cout<<root->data<<"\n";
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(Node *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}
Node *sortedArrayToBST(int arr[],int start,int end){
    if(start>end)
     return NULL;
    int mid=start+(end-start)/2;
    Node *root = new Node(arr[mid]);
    root->left =sortedArrayToBST(arr, start, mid-1); 
    root->right =sortedArrayToBST(arr, mid+1, end);
    return root;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node *root = sortedArrayToBST(arr, 0, n-1);
     
    print2D(root);
 
    return 0;
}


