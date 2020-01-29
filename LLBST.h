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

class LinkedBST::public BST{
private:
    Node* root;

public:
    void add(int data);
    void preOrderTraversal();
    void search(int data);
};
