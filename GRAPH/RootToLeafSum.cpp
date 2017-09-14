class Node
{
public:
Node* left;
Node* right;
int data;
Node(int data, Node*right = NULL, Node* left = NULL):data(data),right(right),left(left){};
};
int postorderSum(Node* root, vector<int> &list)
{
if(!root)
return 0;

vector<int> rightList, leftList;
int rightSum = postorderSum(root->right, rightList);
int leftSum = postorderSum(root->left, leftList);

int result = 0;

if(rightSum > leftSum)
{
list = rightList;
list.push_back(root->data);
result = rightSum + root->data;
}
else
{
list = leftList;
list.push_back(root->data);
result = leftSum + root->data;
}

return result;
}

void maxSumLeaf(Node* root)
{
if(!root)
return;

vector<int> list;
int sum = postorderSum(root,list);

cout << "Sum is " << sum << endl;
for(vector<int>::iterator it = list.begin(); it != list.end(); ++it)
cout<<*it<<" ";
}
