#include<bits/stdc++.h>
using namespace std;

///for trees
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int data;

    node(int d)
    {
        left=NULL;
        right=NULL;
        data=d;
    }
};

node* buildtree(){
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildtree();
    root->right=buildtree();

    return root;
}

void printright(node* root,int level,int &maxlevel)
{
    if(root==NULL)
    return;

    if(level>maxlevel)
    {
    cout<<root->data<<endl;
    maxlevel=level;
    }

    printright(root->right,level+1,maxlevel);

   
    printright(root->left,level+1,maxlevel);

    return;

}

int main()
{
    node* root=buildtree();
    int maxlevel=-1;
    int level=0;
    printright(root,level,maxlevel);
    return 0;
}