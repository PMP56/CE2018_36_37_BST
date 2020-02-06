#include <iostream>
#include "LLBST.h"

LinkedBST::LinkedBST(){
    root = NULL;
}

void LinkedBST :: add(int data){
    add(root, data);
}

void LinkedBST :: add(Node* root,int data){
    Node* newNode = new Node();
    newNode->data = data;
    if (root == NULL){
        Node* newRoot = new Node();
        newRoot = newNode;
    }
    if (data < root->data){
        return add(root->left, data);
    }else{
        return add(root->right, data);
    }

    //insert_e(root, newNode);
}

/*
void LinkedBST :: insert_e(Node* root, Node* newNode){
    if(root == NULL){
        Node* root = new Node();
        root = newNode;
    }
    if (newNode->data < root->data){
        return insert_e(root->left, newNode);
    }else{
        return insert_e(root->right, newNode);
    }
}
*/
void LinkedBST :: preOrderTraversal(){
    traverse(root);
}

void LinkedBST :: traverse(Node* root){
    if (root == NULL){
        return;
    }
    std :: cout << root->data << "\n";
    traverse(root->left);
    traverse(root->right);
}

int main(){
    LinkedBST T;
    T.add(5);
    T.add(10);
    T.add(2);
    T.preOrderTraversal();
}
