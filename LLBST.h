#ifndef LINKEDBST_h
#define LINKEDBST_h
#include "BinaryTree.h"


class node
{

public:
friend class LinkedBST;
    int data;
    node* left ;
    node* right;
    node();
    node(int);
    ~node();

};


class LinkedBST:public BinarySearchTree{

    public:
    node root;
    LinkedBST();
    ~LinkedBST();
    void preordertraversal();
    void preordertraversal(node *root);

    void inordertraversal();
    void inordertraversal(node *root);

    void add(int data);
    void add(node *root,int data);

    void deleteitem(int data);
    void deleteitem(node *root, int data);
    bool search(int data);
    bool search(node *root,int targetKey);
    int maximum();
    int maximum(node *root);
};
#endif
