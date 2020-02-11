#include"LinkedBST.h"
#include<iostream>
using namespace std;

node::node(){
    data=0;
    left=right=NULL;
}

node::node(int value){
    data=value;
    left=right=NULL;
}

node::~node(){}


LinkedBST::LinkedBST(){
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(int data){
}
void LinkedBST::deleteitem(int data){}
void LinkedBST::preordertraversal(){}

void LinkedBST::inordertraversal(){}

bool LinkedBST::search(int data){}

int LinkedBST::maximum(){}

void LinkedBST::add(node *root,int data){
if (root->data==0){
    root->data=data;
}else{
        if (data < root->data){
            if (!root->left){
                node *newnode=new node(data);
                root->left=newnode;
            }
            else{
                add(root->left,data);
            }
        }
        else if (data > root->data){
            if (!root->right){
                node *newnode=new node(data);
                root->right=newnode;
            }
            else{
                add(root->right,data);
            }
        }
    }
}

void LinkedBST::deleteitem(node *root,int data){
    if (!root){
        return;}
    else if (data<root->data){
        return deleteitem(root->left, data);
    }
    else if(data>root->data){
        return deleteitem(root->left,data);
    }
    else{
        if (root->left==NULL){
            root->right = root;
        }
        else if (root->right==NULL){
            root->left = root;
        }
        else{
            int largest;
            node *ntd =new node();
            ntd = root;
            largest = maximum(root);
            ntd->data = largest;
            return deleteitem(ntd->left, largest);

        }

    }

}

bool LinkedBST::search(node *root,int targetKey){
    if(root->data==0){
        cout<<"It is an empty tree"<<endl;
    }
    else{
        node *p=new node();
        p=root;
        while(p){
            if(targetKey>p->data){
                p=p->right;
            }
            else if(targetKey<p->data){
                p=p->left;
            }
            else if(targetKey==p->data){
                cout<<targetKey<<" is in the tree"<<endl;
                return 1;

            }
            else{
                cout<<targetKey<<" is not in the tree"<<endl;
                return 0;
            }
        }
    }
    cout<<targetKey<<" is not in the tree"<<endl;
    return 0;
}


void LinkedBST::preordertraversal(node* root) {
    if (!root)
    return;


    cout << root->data << "\t";


    preordertraversal(root->left);


    preordertraversal(root->right);
}

void LinkedBST::inordertraversal(node* root) {
    if (!root)
    return;


    inordertraversal(root->left);

    cout << root->data << "\t";


    inordertraversal(root->right);
}

int LinkedBST::maximum(node *root){
    if(root->data == 0){
        cout<<"it is a null tree"<<endl;
    }
    else if(root->right == NULL){
        return root->data;
    }
    else{
        maximum(root->right);
    }


}


int main(){
	LinkedBST t;
    int a;
	t.add(&t.root,16);
	t.add(&t.root,72);
	t.add(&t.root,8);
	t.add(&t.root,9);
	t.add(&t.root,1);
	t.add(&t.root,86);
	t.add(&t.root,63);
	cout<<"Preorder Traversal of the tree is"<<endl;
	t.preordertraversal(&t.root);
	cout<<endl;
	cout<<"Inorder Traversal of the tree is"<<endl;
	t.inordertraversal(&t.root);
	cout<<endl;
    a = t.maximum(&t.root);
    cout<<"the max term in the tree is "<<a<<endl;

	int number;
	char character;
	cout<<"\nEnter any number you want to search for in the tree"<<endl;
	cin>>number;
	t.search(&t.root,number);


}
