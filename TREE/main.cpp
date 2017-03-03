#include<bits/stdc++.h>
using namespace std;

struct Tnode{
int data;
struct Tnode * left;
struct Tnode * right;
};

struct Tnode* newnode(int da)
{
struct Tnode*newnode=(struct Tnode*)malloc(sizeof(struct Tnode));
newnode->data=da;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

struct Tnode * bst(int arr[],int a ,int b)
{
if(a>b)return NULL;
int mid = (a+b)/2;
struct Tnode* root = newnode(arr[mid]);
root->left=bst(arr,a,mid-1);
root->right=bst(arr,mid+1,b);
return root;
}


void preorder(struct Tnode* node)
{
if(node==NULL)
return ;
cout<<node->data;
preorder(node->left);
preorder(node->right);
}

void postorder(struct Tnode* node)
{
if(node==NULL)
return ;
postorder(node->left);
postorder(node->right);
cout<<node->data;
}

void inorder(struct Tnode* node)
{
if(node==NULL)
return ;
inorder(node->left);
cout<<node->data;
inorder(node->right);
}
int main ()
{
int arr[]={1,2,3,4,5,6,7};
struct Tnode* node = bst(arr,0,6);
cout<<endl<<"PREORDER"<<endl;
preorder(node);
cout<<endl<<"POSTORDER"<<endl;
postorder(node);
cout<<endl<<"INORDER"<<endl;
inorder(node);

return 0;
}
