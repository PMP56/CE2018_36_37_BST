#include "BST.h"

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(){
        data = 0;
        left = right = NULL;
    }
};

class LinkedBST:public BST{
private:
    Node* root;

public:
    LinkedBST();
    void add(int data);
    void add(Node* root,int data);
    void insert_e(Node* root, Node* newNode);
    void preOrderTraversal();
    void traverse(Node* root);
    //void search(int data);
};
